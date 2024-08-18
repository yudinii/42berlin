/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:12:44 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/19 16:28:28 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		result = nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
}
/*int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 2));
       	printf("%d\n", ft_recursive_power(0, 0));
        printf("%d\n", ft_recursive_power(0, 2));
        printf("%d\n", ft_recursive_power(-4, 2));
        printf("%d\n", ft_recursive_power(3, 0));
        printf("%d\n", ft_recursive_power(2, -1));
        printf("%d\n", ft_recursive_power(0, -2));

	return (0);
}*/
