/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:35:41 by ronda             #+#    #+#             */
/*   Updated: 2024/11/16 00:51:07 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		src_len;
	int		i;
	char	*dup;

	i = 0;
	while (src[i])
		i++;
	src_len = i;
	dup = malloc(sizeof(char) * (src_len + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < src_len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
