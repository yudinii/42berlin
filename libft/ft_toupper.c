/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:19:29 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/29 12:19:34 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	else
		return (c);
	return (c);
}
/*int main(void)
{
	char	i = 'b';

	printf("mine: %c\n", ft_toupper(i));
	printf("original: %c\n", toupper(i));

	return (0);
}*/