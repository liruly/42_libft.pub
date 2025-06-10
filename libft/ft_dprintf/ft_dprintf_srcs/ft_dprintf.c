/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:41:13 by ronda             #+#    #+#             */
/*   Updated: 2025/06/10 15:16:11 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_dprintf.h"

static int	address_specifier(t_info *info, va_list *ap);

// temporarily c/d/s specifiers only
int	ft_dprintf(int fd, const char *format, ...)
{
	t_info	info;
	va_list	ap;

	if (!format)
		return (FAILURE);
	info.fd = fd;
	info.format = (char *)format;
	info.reading_pos = -1;
	info.cnt_char = 0;
	while (format[++info.reading_pos])
	{
		if (format[info.reading_pos] != '%')
		{
			if (ft_putchar_fd(info.fd, format[info.reading_pos]) < 0)
				return (-1);
		}
		else
		{
			info.reading_pos++;
			if (address_specifier(&info, &ap) < 0)
				return (-1);
		}
	}
	return (info.cnt_char);
}

static int	address_specifier(t_info *info, va_list *ap)
{
	if (info->format[info->reading_pos] == 'c')
		return (address_c(info, ap));
	if (info->format[info->reading_pos] == 's')
		return (address_s(info, ap));
	if (info->format[info->reading_pos] == 'd'
		|| info->format[info->reading_pos] == 'i')
		return (address_d(info, ap));
	if (info->format[info->reading_pos] == '%')
		return (ft_putchar_fd(info->fd, '%'));
	return (-1);
}
