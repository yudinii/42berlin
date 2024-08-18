/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:40:32 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/19 15:54:46 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (nb > 1)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
}
/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(10));
	printf("%d\n", ft_iterative_factorial(-2));	
	printf("%d\n", ft_iterative_factorial(0));

	return (0);
}*/
