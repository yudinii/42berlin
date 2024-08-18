/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:48:29 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/09 20:54:26 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*lowercase;

	lowercase = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	return (lowercase);
}
/*int	main(void)
{
	char	a[] = "LET ME TAKE EXAM";
	char	b[] = "I'm SOO stupid";

	printf("%s\n", ft_strlowcase(a));
	printf("%s\n", ft_strlowcase(b));

	return (0);
}*/
