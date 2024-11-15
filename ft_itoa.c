/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:33:42 by ronda             #+#    #+#             */
/*   Updated: 2024/11/16 00:49:50 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
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
	return (ft_strdup(&buf[i]));
}
