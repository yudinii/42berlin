/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:57:56 by yujkim            #+#    #+#             */
/*   Updated: 2024/05/08 15:57:57 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;
	int		len_s1;
	int		len_s2;

	i = 0;
	j = 0;
	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
/*int	main(void)
{
	char	a[] = "i_want_to_";
	char	b[] = "finish_libft";

	printf("%s\n", ft_strjoin(a, b));
	return (0);
}*/