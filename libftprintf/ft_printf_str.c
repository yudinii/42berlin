/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:12:02 by yujkim            #+#    #+#             */
/*   Updated: 2024/08/22 16:12:03 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(va_list ap)
{
	char	*str;
	int		result;

	result = 0;
	str = va_arg(ap, char *);
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		result += 6;
	}
	else
	{
		ft_putstr_fd(str, 1);
		result = ft_strlen(str);
	}
	return (result);
}
