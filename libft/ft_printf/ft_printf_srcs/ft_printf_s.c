/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 01:11:13 by ronda             #+#    #+#             */
/*   Updated: 2025/06/10 15:17:45 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_s(va_list *ap, int *cnt)
{
	char	*s;
	int		temp;

	s = va_arg(*ap, char *);
	if (!s)
		temp = ft_putstr_fd("(null)", STDOUT_FILENO);
	else
		temp = ft_putstr_fd(s, STDOUT_FILENO);
	*cnt += temp;
	return (temp);
}
