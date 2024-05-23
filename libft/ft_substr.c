/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:28:28 by yujkim            #+#    #+#             */
/*   Updated: 2024/05/08 14:28:30 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len > ft_strlen((char *)s + start))
		len = ft_strlen((char *)s + start);
	result = (char *)malloc(len + 1 * sizeof(char));
	if (!result)
		return (NULL);
	while (i < len && *s != '\0')
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*int	main(void)
{
	char	a[] = "whencanifinishthislibft?";
	
	printf("%s\n", ft_substr(a, 8, 6));
	return (0);
}*/