/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:40:51 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/07 13:42:23 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num;

	num = *a;
	*a = num / *b;
	*b = num % *b;
}
/*int	main(void)
{
	int	x = 42;
	int	y = 5;

	ft_ultimate_div_mod(&x, &y);
	printf("%d, %d", x, y);

	return (0);
}*/
