/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:40:27 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/14 16:57:25 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	srclen = ft_strlen(src);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && --size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (srclen);
}
/*int	main(void)
{
	char	original[] = "i am a student of 42berlin";
	char	copy[] = "congratulations!";

	printf("%s\n%s\n", original, copy);
	int	result = ft_strlcat(copy, original, 100);
	printf("%d\n", result);
	printf("%s\n%s\n", original, copy);

	char    original1[] = "i am a student of 42berlin";
       	char    copy1[] = "congratulations!";
	int	result1 = strlcat(copy1, original1, 100);
	printf("%d\n", result1);
        printf("%s\n%s\n", original1, copy1);

	return (0);
}*/
