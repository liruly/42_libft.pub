/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronda <ronda@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:54:59 by ronda             #+#    #+#             */
/*   Updated: 2025/06/10 15:10:51 by ronda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../../libft.h"
# include <stdarg.h>

// ft_printf.c
int		ft_printf(const char *format, ...);

// src/ft_printf_c.c
int		ft_printf_c(va_list *ap, int *cnt);

// src/ft_printf_d.c
int		ft_printf_d(va_list *ap, int *cnt);

// src/ft_printf_p.c
int		ft_printf_p(va_list *ap, int *cnt);

// src/ft_printf_s.c
int		ft_printf_s(va_list *ap, int *cnt);

// src/ft_printf_u.c
int		ft_printf_u(va_list *ap, int *cnt);

// src/ft_printf_x.c
int		ft_printf_x_lower(va_list *ap, int *cnt);
int		ft_printf_x_upper(va_list *ap, int *cnt);

// src/utils_1.c
int		ft_putchar_fd_s(char c, int fd);
// int		ft_putstr_fd_s(char *s, int fd);

// src/utils_2.c
int		ft_putnbr_fd_s(int n, int fd);
int		ft_put_unsignednbr_fd_s(unsigned int n, int fd);
int		ft_put_u_nbr_base_fd_s(unsigned int n, char *base_system, int fd);

#endif