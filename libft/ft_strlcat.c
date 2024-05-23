/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:38:38 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/27 17:38:39 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# include <string.h>
//# include <stdio.h>
//# include <unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	temp;

	temp = ft_strlen(dest) + ft_strlen((char *)src);
	if (ft_strlen(dest) < n)
	{
		n = n - ft_strlen(dest) - 1;
		dest = dest + ft_strlen(dest);
		while (*src != 0)
		{
			if (n <= 0)
				break ;
			else
				*dest++ = *src++;
			n--;
		}
		*dest = '\0';
		return (temp);
	}
	else
		return (ft_strlen((char *)src) + n);
}
/*int	main(void)
{
	char	a[] = "abcdefghijklmnopqrstuvwxyz";
	char	b[] = "kuuuuuuk";

	printf("%d\n", ft_strlen(a));
	printf("%d\n", ft_strlen(b));
	printf("%d\n", ft_strlcat(b, a, 15));
	printf("dest: %s\n", b);
	
	int	i = 0;
	while (i < 50)
	{
		write(1, &b[i], 1);
		i++;
	}
	return (0);
}*/