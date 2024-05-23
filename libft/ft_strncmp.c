/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:43:07 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/29 13:43:09 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] - (unsigned char)s2[i] != 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	a[] = "apple";
	char	b[] = "applebanana";

	printf("mine: %d\n", ft_strncmp(a, b, 5));
	printf("mine: %d\n", ft_strncmp(a, b, 8));
	printf("original: %d\n", strncmp(a, b, 5));
	printf("original: %d\n", strncmp(a, b, 8));

	return (0);
}*/