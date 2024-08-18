/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:27:59 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/20 17:23:09 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (j < nb && i <= 46340)
	{
		j = i * i;
		i++;
	}
	if (j == nb)
		return (i - 1);
	return (0);
}
/*int	main(void)
{
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(100));
	printf("%d\n", ft_sqrt(149));
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(13));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(2147483647));
//	printf("%d\n", ft_sqrt(2147483648));

	return (0);
}*/
