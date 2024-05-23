/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:47:58 by yujkim            #+#    #+#             */
/*   Updated: 2024/05/04 15:48:00 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen((char *)s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*int	main(int argc, char **argv)
{
	char	*a;
	char	*b;

	if (argc == 2)
	{
		a = ft_strdup(argv[1]);
		b = strdup(argv[1]);
		printf("%s\n%s\n", a, b);
	}
	return(0);
}*/