/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:44:01 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/21 11:11:45 by yujkim           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb ++;
	while (!(ft_is_prime(nb)))
		nb += 2;
	return (nb);
}
/*int	main(void)
{
        printf("%d\n", ft_is_prime(4));
        printf("%d\n", ft_is_prime(13));
        printf("%d\n", ft_is_prime(100));

	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(100));
	printf("%d\n", ft_find_next_prime(987654));
	printf("%d\n", ft_find_next_prime(2147483647));

	return (0);
}*/
