/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:04:52 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/24 15:06:24 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return(i);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int	i;

	i = 0;

	result = (char*)malloc((ft_strlen(src) + 1)*sizeof(char));
	if (result == 0)
			return(0);
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

int	main(int argc, char **argv)
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
}
