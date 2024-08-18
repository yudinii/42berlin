/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:12:12 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/18 16:25:31 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	
	i = 1;
	if (nb < 0)
		return(0);
	else
	{
		while (i < nb)
		{
			if (nb / i == i && nb % i == 0)
				return(i);
			else
				i++;
		}
		return(0);
	}
}

int	main(void)
{
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(100));
	printf("%d\n", ft_sqrt(289));
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(2147395600));
	return(0);
}
