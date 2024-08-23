/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:35:40 by yujkim            #+#    #+#             */
/*   Updated: 2024/08/22 15:35:42 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_dec(va_list ap)
{
	int	dec;
	int	result;
	int	temp;

	dec = va_arg(ap, int);
	result = 0;
	if (dec <= 0)
		result++;
	temp = dec;
	while (temp != 0)
	{
		result++;
		temp /= 10;
	}
	ft_putnbr_fd(dec, 1);
	return (result);
}
