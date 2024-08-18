/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:12:38 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/21 09:00:21 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (!(nb % 2 == 0))
	{
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
/*int	main(void)
{
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(27));
	printf("%d\n", ft_is_prime(2468));
	printf("%d\n", ft_is_prime(11111));

	return (0);
}*/
