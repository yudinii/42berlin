/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:50:34 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/08 16:46:23 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < size - 1)
	{
		if (tab[x] > tab[x + 1])
		{
			y = tab[x];
			tab[x] = tab[x + 1];
			tab[x + 1] = y;
			x = 0;
		}
		else
		{
			x++;
		}
	}
}
int	main(void)
{
	int	array[] = {6, 2, 8, 1, 3};
	int	size = 5;

	for(int	i = 0; i < size; i++)
	{
		ft_sort_int_tab(array, 5);
		printf("%d", array[i]);
	}
	return (0);
}
