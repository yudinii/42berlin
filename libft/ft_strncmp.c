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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
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