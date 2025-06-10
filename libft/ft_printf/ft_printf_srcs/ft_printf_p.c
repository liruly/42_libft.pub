/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 01:20:40 by ronda             #+#    #+#             */
/*   Updated: 2025/06/10 15:17:27 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_putptr_fd_s(uintptr_t ptr, int fd);

int	ft_printf_p(va_list *ap, int *cnt)
{
	void		*ptr;
	uintptr_t	ads;
	int			temp;

	ptr = va_arg(*ap, void *);
	ads = (uintptr_t)ptr;
	if (ptr == NULL)
	{
		temp = ft_putstr_fd("(nil)", STDOUT_FILENO);
		*cnt += temp;
		return (temp);
	}
	temp = ft_putptr_fd_s(ads, STDOUT_FILENO);
	*cnt += temp;
	return (temp);
}

static int	ft_putptr_fd_s(uintptr_t ads, int fd)
{
	int		temp;
	int		temp_2;
	char	*base16_chrs;

	base16_chrs = "0123456789abcdef";
	if (ads < 16)
	{
		temp_2 = ft_putstr_fd("0x", fd);
		if (temp_2 < 0)
			return (temp_2);
		temp = ft_putchar_fd(base16_chrs[ads], fd);
		if (temp < 0)
			return (temp);
		return (temp + temp_2);
	}
	temp = ft_putptr_fd_s(ads / 16, fd);
	if (temp < 0)
		return (temp);
	temp_2 = ft_putchar_fd(base16_chrs[ads % 16], fd);
	if (temp_2 < 0)
		return (temp_2);
	return (temp + temp_2);
}
