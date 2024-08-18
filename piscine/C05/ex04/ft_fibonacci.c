/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:31:02 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/20 14:26:45 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
		return (-1);
	while (index >= 0)
	{
		if (index == 0)
			return (0);
		else if (index == 1)
			return (1);
		else 
		{
			result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
			return (result);
		}
	}
	return (result);
}
/*int	main(void)
{
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(-3));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(10));

	return (0);
}*/
