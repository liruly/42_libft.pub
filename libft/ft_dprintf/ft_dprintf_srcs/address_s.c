/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:32:06 by ronda             #+#    #+#             */
/*   Updated: 2025/06/10 14:37:58 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_dprintf.h"

int	address_s(t_info *info, va_list *ap)
{
	char	*s;
	int		ret;

	s = va_arg(*ap, char *);
	if (!s)
		ret = ft_putstr_fd("(null)", info->fd);
	else
		ret = ft_putstr_fd(s, info->fd);
	info->cnt_char += ret;
	return (ret);
}
