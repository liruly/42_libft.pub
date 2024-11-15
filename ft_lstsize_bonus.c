/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:18:16 by ronda             #+#    #+#             */
/*   Updated: 2024/11/06 16:21:57 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cnt;
	t_list	*temp;

	if (lst == NULL)
		return (0);
	cnt = 0;
	temp = lst;
	while (temp)
	{
		temp = temp->next;
		cnt++;
	}
	return (cnt);
}
