/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:12:57 by ronda             #+#    #+#             */
/*   Updated: 2024/11/16 00:51:25 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cnt;
	char	*temp;

	cnt = 0;
	temp = (char *)src;
	if (size == 0)
	{
		while (src[cnt])
			cnt++;
		return (cnt);
	}
	while (*temp != '\0' && cnt < size - 1)
	{
		*dst = *temp;
		dst++;
		temp++;
		cnt++;
	}
	*dst = '\0';
	while (*temp != '\0')
	{
		temp++;
		cnt++;
	}
	return (cnt);
}
