/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:51:01 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/17 15:54:19 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else 
		write(1, "P", 1);
}

int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(-123);
	ft_is_negative(42);
	return(0);
}
