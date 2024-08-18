/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:32:40 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/19 15:55:14 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*int	main(void)
{
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(4));
	printf("%d\n", ft_recursive_factorial(5));

	return (0);
}*/
