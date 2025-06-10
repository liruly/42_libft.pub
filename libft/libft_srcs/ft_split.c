/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:44:20 by ronda             #+#    #+#             */
/*   Updated: 2025/05/21 12:11:21 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*ft_substr_dup(char *src, int start, int finish);
static int	words_count(char *str, char c);
static void	free_allocated_memory(char **ans, int j);
static char	**making_ans(char **ans, char *str, char c, int *j);

char	**ft_split(char const *s, char c)
{
	int		cnt;
	int		j;
	char	**ans;

	if (!s)
		return (NULL);
	cnt = words_count((char *)s, c);
	ans = malloc(sizeof(char *) * (cnt + 1));
	if (!ans)
		return (NULL);
	j = 0;
	if (!making_ans(ans, (char *)s, c, &j))
		return (NULL);
	ans[j] = NULL;
	return (ans);
}

static char	*ft_substr_dup(char *src, int start, int finish)
{
	char	*temp;
	int		i;

	i = 0;
	temp = malloc(sizeof(char) * (finish - start + 1));
	if (!temp)
		return (NULL);
	while (start < finish)
		temp[i++] = src[start++];
	temp[i] = '\0';
	return (temp);
}

static int	words_count(char *str, char c)
{
	int	i;
	int	in_word;
	int	cnt;

	i = 0;
	in_word = 0;
	cnt = 0;
	while (str[i])
	{
		if (str[i] != c && !in_word)
		{
			in_word = 1;
			cnt++;
		}
		else if (str[i] == c)
			in_word = 0;
		i++;
	}
	return (cnt);
}

static void	free_allocated_memory(char **ans, int j)
{
	while (j >= 0)
		free(ans[j--]);
	free(ans);
}

static char	**making_ans(char **ans, char *str, char c, int *j)
{
	int	i;
	int	k;

	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			k = i;
			while (str[i] && str[i] != c)
				i++;
			ans[*j] = ft_substr_dup(str, k, i);
			if (!ans[*j])
			{
				free_allocated_memory(ans, *j - 1);
				return (NULL);
			}
			(*j)++;
		}
		else
			i++;
	}
	return (ans);
}
