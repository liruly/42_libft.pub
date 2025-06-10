/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:20:20 by ronda             #+#    #+#             */
/*   Updated: 2025/05/20 20:22:31 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	is_set(char c, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str1;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_strdup(""));
	if (!set || set[0] == '\0')
		return (ft_strdup(s1));
	end--;
	while (s1[start] && is_set(s1[start], set))
		start++;
	while (s1[end] && is_set(s1[end], set) && end > 0)
		end--;
	if (start > end)
		return (ft_strdup(""));
	str1 = malloc(sizeof(char) * (end - start + 2));
	if (!str1)
		return (NULL);
	ft_strlcpy(str1, &s1[start], end - start + 2);
	return (str1);
}

static int	is_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
