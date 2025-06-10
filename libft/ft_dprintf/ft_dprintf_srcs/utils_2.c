/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:07:47 by ronda             #+#    #+#             */
/*   Updated: 2025/06/10 15:06:34 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_dprintf.h"

// functions to address numbers
// int
int	ft_putnbr_fd_s(int n, int fd)
{
	char	str[12];

	ft_itoa_s(n, str);
	return (write(fd, str, ft_strlen(str)));
}

// static void	ft_itoa_s(int n, char *str)
// {
// 	char			buf[12];
// 	size_t			i;
// 	unsigned int	abs;

// 	if (!str)
// 		return ;
// 	i = 11;
// 	buf[i] = '\0';
// 	if (n >= 0)
// 		abs = (unsigned int)n;
// 	else
// 		abs = (unsigned int)(-1 * n);
// 	while (--i)
// 	{
// 		buf[i] = (abs % 10) + '0';
// 		abs /= 10;
// 		if (!abs)
// 			break ;
// 	}
// 	if (n < 0)
// 		buf[--i] = '-';
// 	ft_strlcpy(str, &buf[i], 12 - i);
// }

// // unsigned int
// int	ft_put_unsignednbr_fd_s(unsigned int n, int fd)
// {
// 	char	str[12];

// 	ft_unsigned_to_a_s(n, str);
// 	return (write(fd, str, ft_strlen(str)));
// }

// void	ft_unsigned_to_a_s(unsigned int n, char *str)
// {
// 	char	buf[12];
// 	size_t	i;

// 	if (!str)
// 		return ;
// 	i = 11;
// 	buf[i] = '\0';
// 	while (--i)
// 	{
// 		buf[i] = (n % 10) + '0';
// 		n /= 10;
// 		if (!n)
// 			break ;
// 	}
// 	ft_strlcpy(str, &buf[i], 12 - i);
// }

// // base_system
// int	ft_put_u_nbr_base_fd_s(unsigned int n, char *base_system, int fd)
// {
// 	int	temp;
// 	int	temp_2;

// 	if (!base_system)
// 		return (-1);
// 	if (n < ft_strlen(base_system))
// 	{
// 		temp = ft_putchar_fd_s(base_system[n], fd);
// 		return (temp);
// 	}
// 	temp = ft_put_u_nbr_base_fd_s(n / 16, base_system, fd);
// 	if (temp < 0)
// 		return (-1);
// 	temp_2 = ft_putchar_fd_s(base_system[n % 16], fd);
// 	temp += temp_2;
// 	return (temp);
// }
