/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:17:11 by yujkim            #+#    #+#             */
/*   Updated: 2024/08/20 17:17:14 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h> //va_list, va_start, va_arg, va_end
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int		ft_check_type(char c, va_list ap);
int		ft_check_str(va_list ap, char *format);
int		ft_printf(const char *format, ...);
int		ft_printf_char(va_list ap);
int		ft_printf_dec(va_list ap);
int		ft_printf_str(va_list ap);
int		ft_printf_ptr(va_list ap);
int		ft_printf_unsigned_dec(va_list ap);
int		ft_printf_hex(int n, char c);
int		ft_hex_length(unsigned long long ptr);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int nbr, int fd);
void	ft_hextype(unsigned long long u, char c);
void	ft_printundint(unsigned int u);
size_t	ft_strlen(const char *str);
