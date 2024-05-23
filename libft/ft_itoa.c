/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:38:34 by yujkim            #+#    #+#             */
/*   Updated: 2024/05/13 12:38:36 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

static size_t	ft_num_len(int num)
{
	size_t		len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		len += 1;
	while (num != 0)
	{
		num /= 10;
		len ++;
	}
	return (len);
}

static char	*ft_putnum(int num, int length)
{
	char	*result;

	result = (char *)malloc((length + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[length] = '\0';
	if (num == 0)
		result[0] = '0';
	while (num != 0)
	{
		result[length - 1] = (num % 10) + 48;
		length--;
		num /= 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	length;

	length = ft_num_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		result = ft_putnum(-n, length);
		if (!result)
			return (NULL);
		result[0] = '-';
	}
	else
	{
		result = ft_putnum(n, length);
		if (!result)
			return (NULL);
	}
	return (result);
}
/*int	main(void)
{
	printf("%s\n", ft_itoa(-12345));
	printf("%s\n", ft_itoa(1452345));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}*/