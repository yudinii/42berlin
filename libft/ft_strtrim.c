/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:32:03 by yujkim            #+#    #+#             */
/*   Updated: 2024/05/08 16:32:05 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup((char *)s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen((char *)s1) - 1;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr((char *)s1, start, end - start + 1));
}
/*int	main(void)
{
	char	a[] = "ababcdabghetgbaab";
	char	b[] = "ab";

	printf("%s\n", ft_strtrim(a, b));

	return(0);
}*/