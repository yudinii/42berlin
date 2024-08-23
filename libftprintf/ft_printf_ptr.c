/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:18:07 by yujkim            #+#    #+#             */
/*   Updated: 2024/08/23 14:18:08 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_length(unsigned long long ptr)
{
	int	length;

	length = 0;
	if (ptr == 0)
		return (1);
	while (ptr > 0)
	{
		length++;
		ptr /= 16;
	}
	return (length);
}

int	ft_printf_ptr(va_list ap)
{
	int					length;
	unsigned long long	ptr;

	length = 0;
	ptr = (unsigned long long)va_arg(ap, void *);
	if (ptr == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	else
	{
		ft_putstr_fd("0x", 1);
		ft_hextype(ptr, 'x');
		length = ft_hex_length(ptr) + 2;
	}
	return (length);
}
