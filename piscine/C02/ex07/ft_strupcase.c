/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:29:35 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/09 20:44:35 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*uppercase;

	uppercase = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (uppercase);
}
/*int	main(void)
{
	char	a[] = "yujin Kim";
	char	b[] = "HII yujin";

	printf("%s\n", ft_strupcase(a));
	printf("%s\n", ft_strupcase(b));

	return (0);
}*/
