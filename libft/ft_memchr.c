/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:59:45 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/29 13:59:47 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((char *)p + i);
		else
			i++;
	}
	return (0);
}
/*int	main (void)
{
	char a[] = "yujinkimkim";

	printf("mine: %s\n", (char *)ft_memchr(a, 'k', 5));
	printf("mine: %s\n", (char *)ft_memchr(a, 'k', 10));
	printf("original: %s\n", (char *)memchr(a, 'k', 5));
	printf("original: %s\n", (char *)memchr(a, 'k', 10));

	return (0);
}*/