/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:10:31 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/29 13:10:34 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	i;

	i = (unsigned char)c;
	while (*str != '\0')
	{
		if (*str == i)
			return ((char *)str);
		else
			str++;
	}
	if (i == '\0')
		return ((char *)str);
	return (NULL);
}
/*int	main(void)
{
	char a[] = "yujinkimkim";

	printf("%s\n", ft_strchr(a, 'k'));
	printf("%s\n", strchr(a, 'k'));

	return (0);
}*/