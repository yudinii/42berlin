/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:00:32 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/07 12:39:47 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int	a = 42;
	int	b = 2;
	int	division;
	int	modular;

	ft_div_mod(a, b, &division, &modular);
	printf("%d, %d, %d, %d", a, b, division, modular);  
	
	return (0);
}*/
