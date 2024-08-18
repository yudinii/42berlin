/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:49:42 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/06 20:56:29 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*int	main(void)
{
	int	num1 = 4;
	int	num2 = 2;

	printf("num1:%d,num2:%d", num1, num2);
	printf("\n");

	ft_swap(&num1, &num2);
	printf("num1:%d,num2:%d", num1, num2);

	return (0);
}*/
