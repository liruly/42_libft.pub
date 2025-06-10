/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:06:38 by ronda             #+#    #+#             */
/*   Updated: 2025/06/10 15:09:21 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_itoa_s(int n, char *str)
{
	char			buf[12];
	size_t			i;
	unsigned int	abs;

	if (!str)
		return ;
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
			break ;
	}
	if (n < 0)
		buf[--i] = '-';
	ft_strlcpy(str, &buf[i], 12 - i);
}