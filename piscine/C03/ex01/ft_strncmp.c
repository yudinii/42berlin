/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:42:05 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/13 14:46:12 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < (int)n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == (int)n)
		return (0);
	return (s1[i] - s2[i]);
}
/*int	main(void)
{
	char	a[] = "yujin";
	char	b[] = "yujinkim";
	char	c[] = "";
	
	printf("%d\n", ft_strncmp(a, b, 3));
	printf("%d\n", ft_strncmp(a, b, 5));
	printf("%d\n", strncmp(a, b, 5));
	printf("%d\n", ft_strncmp(a, b, 7));
	printf("%d\n", strncmp(a, b, 7));
	printf("%d\n", ft_strncmp(a, c, 5));
	printf("%d\n", strncmp(a, c, 5));
	
	return (0);
}*/
