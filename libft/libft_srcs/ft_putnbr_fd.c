/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 02:57:23 by ronda             #+#    #+#             */
/*   Updated: 2025/05/20 20:22:31 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	ft_s_itoa(int n, char *str);

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];

	ft_s_itoa(n, str);
	write(fd, str, ft_strlen(str));
}

static void	ft_s_itoa(int n, char *str)
{
	char			buf[12];
	size_t			i;
	unsigned int	abs;

	i = 11;
	buf[i] = '\0';
	if (n >= 0)
		abs = (unsigned int)n;
	else
		abs = (unsigned int)(-1 * n);
	while (--i)
	{
		buf[i] = (abs % 10) + '0';
		abs /= 10;
		if (!abs)
		{
			i--;
			break ;
		}
	}
	if (n < 0)
		buf[i] = '-';
	else
		i++;
	ft_strlcpy(str, &buf[i], 12 - i);
}
