/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:54:23 by ronda             #+#    #+#             */
/*   Updated: 2025/05/21 12:00:01 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_u(va_list *ap, int *cnt)
{
	unsigned int	ui;
	int				temp;

	ui = va_arg(*ap, unsigned int);
	temp = ft_put_unsignednbr_fd_s(ui, STDOUT_FILENO);
	*cnt += temp;
	return (temp);
}
