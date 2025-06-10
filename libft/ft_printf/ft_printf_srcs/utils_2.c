/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:37:42 by ronda             #+#    #+#             */
/*   Updated: 2025/06/10 15:11:19 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_unsigned_to_a_s(unsigned int n, char *str);

// functions to address numbers
// int
int	ft_putnbr_fd_s(int n, int fd)
{
	char	str[12];

	ft_itoa_s(n, str);
	return (write(fd, str, ft_strlen(str)));
}

// unsigned int
int	ft_put_unsignednbr_fd_s(unsigned int n, int fd)
{
	char	str[12];

	ft_unsigned_to_a_s(n, str);
	return (write(fd, str, ft_strlen(str)));
}

static void	ft_unsigned_to_a_s(unsigned int n, char *str)
{
	char	buf[12];
	size_t	i;

	if (!str)
		return ;
	i = 11;
	buf[i] = '\0';
	while (--i)
	{
		buf[i] = (n % 10) + '0';
		n /= 10;
		if (!n)
			break ;
	}
	ft_strlcpy(str, &buf[i], 12 - i);
}

// base_system
int	ft_put_u_nbr_base_fd_s(unsigned int n, char *base_system, int fd)
{
	int	temp;
	int	temp_2;

	if (!base_system)
		return (-1);
	if (n < ft_strlen(base_system))
	{
		temp = ft_putchar_fd_s(base_system[n], fd);
		return (temp);
	}
	temp = ft_put_u_nbr_base_fd_s(n / 16, base_system, fd);
	if (temp < 0)
		return (-1);
	temp_2 = ft_putchar_fd_s(base_system[n % 16], fd);
	temp += temp_2;
	return (temp);
}
