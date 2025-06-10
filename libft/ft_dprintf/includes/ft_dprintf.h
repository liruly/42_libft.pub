/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:41:39 by ronda             #+#    #+#             */
/*   Updated: 2025/06/10 15:22:36 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DPRINTF_H
# define FT_DPRINTF_H

# include "../../libft.h"
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0

# define SUCCESS 0
# define FAILURE 1

typedef struct s_info
{
	int		fd;
	char	*format;
	size_t	reading_pos;
	size_t	cnt_char;
}			t_info;

//srcs
int	address_c(t_info *info, va_list *ap);
int	address_d(t_info *info, va_list *ap);
int	address_s(t_info *info, va_list *ap);



//utils.c
int	ft_putchar_fd(int fd, int c);
int	ft_putstr_fd(char *s, int fd);
int	ft_putnbr_fd_s(int n, int fd);



#endif
