/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:08:16 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/12 17:41:05 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*int	main(void)
{
	char 	a[] = "yujin";
	char	b[] = "yujinkim";
	char	c[] = "";
	char	d[] = "yujin";

	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", strcmp(a, b));
	printf("%d\n", ft_strcmp(a, c));
	printf("%d\n", strcmp(a, c));
	printf("%d\n", ft_strcmp(a, d));
	printf("%d\n", strcmp(a, d));
	
	return (0);
}*/
