/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:02:15 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/29 15:02:17 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j] && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	a[] = "this is an example";
	char	b[] = "an";
	char	c[] = "";

	//printf("%d\n", strnstr(a, b, 10));
	//printf("%d\n", strnstr(a, b, 5));
	//printf("%d\n", strnstr(a, c, 10));
	printf("%s\n", ft_strnstr(a, b, 10));
	printf("%s\n", ft_strnstr(a, b, 9));
	printf("%s\n", ft_strnstr(a, b, 8));
	printf("%s\n", ft_strnstr(a, b, 5));
	printf("%s\n", ft_strnstr(a, c, 10));

	return(0);
}*/