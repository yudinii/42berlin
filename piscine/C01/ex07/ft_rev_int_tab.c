/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:44:19 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/08 16:29:03 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;

	first = 0;
	last = size - 1;

	int	 x;

	while (first < last)
	{
		x = tab[first];
		tab[first] = tab[last];
		tab[last] = x;
		first++;
		last--;
	}
}
int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	int	size = 5;

	for(int i = 0; i < size; i++)
        {
		printf("%d", array[i]);
        }
	printf("\n");

	ft_rev_int_tab(array, 5);

	for(int i = 0; i < size; i++)
	{
		printf("%d", array[i]);
	}
	return (0);
}
