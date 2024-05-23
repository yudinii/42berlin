/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:03:25 by yujkim            #+#    #+#             */
/*   Updated: 2024/05/04 12:03:27 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# include <stdlib.h>
//# include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= 48 && *nptr <= 57)
	{
		result = result * 10 + (*nptr - 48);
		nptr++;
	}
	return (result * sign);
}
/*int	main(void)
{
	char	a[] = "   		  ft---53wjsnv3405";
	char	b[] = "   -dnwh34-56f7";
	char	c[] = "     	12ab34-";

	printf("%d\n", atoi(a));
	printf("%d\n", ft_atoi(a));
	printf("%d\n", atoi(b));
	printf("%d\n", ft_atoi(b));
	printf("%d\n", atoi(c));
	printf("%d\n", ft_atoi(c));

	return (0);
}*/