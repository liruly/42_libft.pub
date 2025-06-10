/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:04:06 by ronda             #+#    #+#             */
/*   Updated: 2025/06/10 14:38:24 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_dprintf.h"

int	address_d(t_info *info, va_list *ap)
{
	int	num;
	int	ret;

	num = va_arg(*ap, int);
	ret = ft_putnbr_fd_s(num, info->fd);
	info->cnt_char += ret;
	return (ret);
}
