/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:59:27 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/15 18:39:54 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	number;

	if (nb == -2147483648)
	{
		write (1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0 && nb != -2147483648)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	number = nb % 10 + '0';
	ft_putchar(number);
}
/*int	main(void)
{
	ft_putnbr(12345678);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');

	return (0);
}*/
