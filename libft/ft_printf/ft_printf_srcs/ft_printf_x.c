/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:12:25 by ronda             #+#    #+#             */
/*   Updated: 2025/05/21 12:00:01 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_x_lower(va_list *ap, int *cnt)
{
	long	n;
	char	*base16_chrs_lower;
	int		temp;

	base16_chrs_lower = "0123456789abcdef";
	n = va_arg(*ap, int);
	temp = ft_put_u_nbr_base_fd_s(n, base16_chrs_lower, STDOUT_FILENO);
	*cnt += temp;
	return (temp);
}

int	ft_printf_x_upper(va_list *ap, int *cnt)
{
	int		n;
	char	*base16_chrs_upper;
	int		temp;

	base16_chrs_upper = "0123456789ABCDEF";
	n = va_arg(*ap, int);
	temp = ft_put_u_nbr_base_fd_s(n, base16_chrs_upper, STDOUT_FILENO);
	*cnt += temp;
	return (temp);
}
