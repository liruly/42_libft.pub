/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:22:35 by ronda             #+#    #+#             */
/*   Updated: 2025/05/21 12:00:01 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_printf_sub(const char *format, va_list *ap, size_t *i, int *cnt);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	i;
	int		cnt;

	if (!format)
		return (-1);
	va_start(ap, format);
	i = 0;
	cnt = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			if (ft_putchar_fd_s(format[i], STDOUT_FILENO) < 0)
				return (va_end(ap), -1);
			i++;
			cnt++;
		}
		else
		{
			if (ft_printf_sub(format, &ap, &i, &cnt) < 0)
				return (va_end(ap), -1);
		}
	}
	return (va_end(ap), cnt);
}

static int	ft_printf_sub(const char *format, va_list *ap, size_t *i, int *cnt)
{
	if (format[*i + 1] == 'c')
		return (*i += 2, ft_printf_c(ap, cnt));
	if (format[*i + 1] == 's')
		return (*i += 2, ft_printf_s(ap, cnt));
	if (format[*i + 1] == 'p')
		return (*i += 2, ft_printf_p(ap, cnt));
	if (format[*i + 1] == 'd' || format[*i + 1] == 'i')
		return (*i += 2, ft_printf_d(ap, cnt));
	if (format[*i + 1] == 'u')
		return (*i += 2, ft_printf_u(ap, cnt));
	if (format[*i + 1] == 'x')
		return (*i += 2, ft_printf_x_lower(ap, cnt));
	if (format[*i + 1] == 'X')
		return (*i += 2, ft_printf_x_upper(ap, cnt));
	if (format[*i + 1] == '%')
	{
		*i += 2;
		*cnt += 1;
		return (ft_putchar_fd_s('%', STDOUT_FILENO));
	}
	return (-1);
}
