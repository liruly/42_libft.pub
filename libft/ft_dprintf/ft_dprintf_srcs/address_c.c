/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:33:26 by ronda             #+#    #+#             */
/*   Updated: 2025/06/10 15:16:11 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_dprintf.h"

int	address_c(t_info *info, va_list *ap)
{
	char	c;
	int		ret;

	c = va_arg(*ap, int);
	ret = ft_putchar_fd(info->fd, c);
	info->cnt_char += ret;
	return (ret);
}
