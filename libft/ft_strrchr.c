/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:29:51 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/29 13:29:53 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str);
	str += i;
	while (i >= 0)
	{
		if (*str == (char) c)
			return ((char *)str);
		i--;
		str--;
	}
	return (NULL);
}
/*int	main(void)
{
	char a[] = "yujinkimkim";

	printf("mine: %s\n", ft_strrchr(a, 'k'));
	printf("mine: %s\n", strrchr(a, 'k'));

	return (0);
}*/