/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:29:08 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/01 18:19:15 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_numbers(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		print_number(i + '0');
		i++;
	}
}

