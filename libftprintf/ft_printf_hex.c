/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:37:36 by yujkim            #+#    #+#             */
/*   Updated: 2024/08/22 16:37:39 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hextype(unsigned long long u, char c)
{
	char	hex;

	if (u >= 16)
	{
		ft_hextype(u / 16, c);
		ft_hextype(u % 16, c);
	}
	else
	{
		if (c == 'x')
			hex = "0123456789abcdef"[u];
		else
			hex = "0123456789ABCDEF"[u];
		ft_putchar_fd(hex, 1);
	}
}

int	ft_printf_hex(int n, char c)
{
	unsigned int	u;
	unsigned int	temp;
	int				result;

	u = (unsigned int)n;
	result = 0;
	if (u == 0)
		result++;
	else
	{
		temp = u;
		while (temp != 0)
		{
			result++;
			temp /= 16;
		}
	}
	ft_hextype((unsigned long long)u, c);
	return (result);
}
