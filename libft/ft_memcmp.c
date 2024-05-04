/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:42:14 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/29 14:42:16 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (n == 0)
			return (0);
		else if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		else
			i++;
	}
	return (0);
}
/*int	main (void)
{
	char a[] = "applebanana";
	char b[] = "apple";

	printf("mine: %d\n", ft_memcmp(a, b, 5));
	printf("mine: %d\n", ft_memcmp(a, b, 10));
	printf("original: %d\n", ft_memcmp(a, b, 5));
	printf("original: %d\n", ft_memcmp(a, b, 10));

	return (0);
}*/