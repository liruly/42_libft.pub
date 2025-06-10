/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 00:36:53 by ronda             #+#    #+#             */
/*   Updated: 2025/05/21 12:09:44 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_d(va_list *ap, int *cnt)
{
	int	n;
	int	temp;

	n = va_arg(*ap, int);
	temp = ft_putnbr_fd_s(n, STDOUT_FILENO);
	*cnt += temp;
	return (temp);
}
