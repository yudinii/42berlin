/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:18:43 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/17 16:39:53 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return(0);
	else if (nb == 0)
		return(1);
	else
	{
		int	result;

		result = 1;
		while(nb > 1)
		{
			result = result * nb;
			nb--;
		}
		return(result);
	}
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(-20));
	printf("%d\n", ft_iterative_factorial(15));
}
