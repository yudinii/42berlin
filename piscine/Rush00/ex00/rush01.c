/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:59:42 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/04 13:45:04 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_line(int x, int start, int middle, int end)
{
	int	a;

	a = 1;
	if (x > 0)
	{
		ft_putchar(start);
	}
	while (a < (x - 1))
	{
		ft_putchar(middle);
		a++;
	}
	if (x > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	a;

	a = 1;
	if (x > 0 && y > 0)
	{
		ft_line(x, '/', '*', '\\');
	}
	while (a < (y - 1))
	{
		ft_line(x, '*', ' ', '*');
		a++;
	}
	if (x > 1 && y > 1)
	{
		ft_line(x, '\\', '*', '/');
	}
}
