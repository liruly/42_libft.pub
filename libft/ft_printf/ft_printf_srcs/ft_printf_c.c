/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:59:39 by ronda             #+#    #+#             */
/*   Updated: 2025/05/21 12:00:01 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_c(va_list *ap, int *cnt)
{
	char	c;
	int		temp;

	c = va_arg(*ap, int);
	temp = write(STDOUT_FILENO, &c, 1);
	*cnt += temp;
	return (temp);
}
