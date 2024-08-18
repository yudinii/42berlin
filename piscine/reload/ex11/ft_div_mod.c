/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:10:14 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/17 16:17:30 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	x = 100;
	int	y = 2;
	int	d;
	int	m;

	printf("x: %d, y: %d\n", x, y);

	ft_div_mod(x, y, &d, &m);
	printf("div: %d, mod: %d", d, m);
	return(0);
}
