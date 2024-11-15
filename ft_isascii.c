/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:41:38 by ronda             #+#    #+#             */
/*   Updated: 2024/11/16 00:49:35 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define START_OF_ASCII 0
#define END_OF_ASCII 127

int	ft_isascii(int c)
{
	return (START_OF_ASCII <= c && c <= END_OF_ASCII);
}
