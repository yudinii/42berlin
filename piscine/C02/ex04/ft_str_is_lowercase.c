/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:12:23 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/09 17:24:57 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int	main(void)
{
	char	a[] = "Yujin";
	char	b[] = "yujin";
	char	c[] = "yujin34";

	printf("%d\n", ft_str_is_lowercase(a));
	printf("%d\n", ft_str_is_lowercase(b));
	printf("%d\n", ft_str_is_lowercase(c));

	return (0);
}*/
