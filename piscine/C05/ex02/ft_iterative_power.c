/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:45:26 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/19 16:30:28 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i <= power)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
}
/*int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 2));
       	printf("%d\n", ft_iterative_power(0, 0));
        printf("%d\n", ft_iterative_power(0, 2));
        printf("%d\n", ft_iterative_power(-4, 2));
        printf("%d\n", ft_iterative_power(3, 0));
        printf("%d\n", ft_iterative_power(2, -1));
        printf("%d\n", ft_iterative_power(0, -2));


	return (0);
}*/
