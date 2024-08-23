/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_dec.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:41:15 by yujkim            #+#    #+#             */
/*   Updated: 2024/08/22 15:41:16 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printundint(unsigned int u)
{
	char	c;

	if (u > 9)
	{
		ft_printundint(u / 10);
		ft_printundint(u % 10);
	}
	else
	{
		c = u + '0';
		ft_putchar_fd(c, 1);
	}
}

int	ft_printf_unsigned_dec(va_list ap)
{
	int				result;
	unsigned int	temp;
	unsigned int	u;

	u = va_arg(ap, unsigned int);
	temp = u;
	result = 0;
	if (u == 0)
		result++;
	while (temp != 0)
	{
		result++;
		temp /= 10;
	}
	ft_printundint(u);
	return (result);
}
