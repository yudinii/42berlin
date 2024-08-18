/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:20:01 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/14 16:39:01 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (nb > j && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	a[] = "hello";
	char	b[] = "yujinkim";
	char	c[] = "cat";

	printf("%s\n", strncat(c, a, 3));
	printf("%s\n", strncat(a, c, 5));

	printf("%s\n", strncat(a, b, 5));

	return (0);
}*/
