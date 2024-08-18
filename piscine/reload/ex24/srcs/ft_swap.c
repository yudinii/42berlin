/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:58:03 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/17 16:08:08 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a = 42;
	int	b = 24;

	printf("a: %d, b: %d\n", a, b);
	ft_swap(&a, &b);
	printf("swap_a: %d, swap_b: %d", a, b);
	return(0);
}
