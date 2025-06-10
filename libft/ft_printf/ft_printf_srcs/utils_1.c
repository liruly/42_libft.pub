/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 02:02:33 by ronda             #+#    #+#             */
/*   Updated: 2025/06/10 15:04:42 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// functions to address char/str
int	ft_putchar_fd_s(char c, int fd)
{
	return (write(fd, &c, 1));
}

// int	ft_putstr_fd_s(char *s, int fd)
// {
// 	if (!s)
// 		return (-1);
// 	return (write(fd, s, ft_strlen(s)));
// }
