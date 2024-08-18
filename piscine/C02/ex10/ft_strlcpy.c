/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:46:37 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/12 12:56:00 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;

	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	i;

	srclen = ft_strlen(src);

	while (src[i] != '\0' && --size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (srclen);
}
int	main(void)
{
	char	original[] = "i am a student of 42berlin";
	char	copy[] = "congratulations!";

	printf("%s\n%s\n", original, copy);
	int	result = ft_strlcpy(copy, original, 100);
	printf("%d\n", result);
	printf("%s\n%s\n", original, copy);

	return (0);
}
