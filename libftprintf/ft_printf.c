/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:22:58 by yujkim            #+#    #+#             */
/*   Updated: 2024/05/23 09:22:59 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(char c, va_list ap)
{
	int	result;

	if (c == 'd' || c == 'i')
		result = ft_printf_dec(ap);
	else if (c == 'u')
		result = ft_printf_unsigned_dec(ap);
	else if (c == 'c')
		result = ft_printf_char(ap);
	else if (c == 's')
		result = ft_printf_str(ap);
	else if (c == 'p')
		result = ft_printf_ptr(ap);
	else if (c == 'x' || c == 'X')
		result = ft_printf_hex(va_arg(ap, int), c);
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		result = 1;
	}
	else
		result = -1;
	return (result);
}

int	ft_check_str(va_list ap, char *format)
{
	int	result;
	int	check_type;

	result = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			check_type = ft_check_type(*(format + 1), ap);
			if (check_type != 0)
				result += check_type;
			else if (check_type < 0)
				return (-1);
			format += 2;
		}
		else
		{
			ft_putchar_fd(*format, 1);
			format++;
			result++;
		}
	}
	return (result);
}

int	ft_printf(const char *format, ...)
{
	int		result;
	va_list	ap;

	result = 0;
	va_start(ap, format);
	result = ft_check_str(ap, (char *)format);
	va_end(ap);
	return (result);
}
