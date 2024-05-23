/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:42:25 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/27 15:42:27 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	if (n)
	{
		while (src[i] != '\0' && i < n - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*int	main(void)
{
	char	a[] = "abcdefghijklmnopqrstuvwxyz";
	char	b[] = "abcdefg";

	//strlcpy(b+7, a, 20);
	printf("%d\n", ft_strlcpy(b+7, a, 20));
	printf("b:%s\n", b);
	return (0);
}*/