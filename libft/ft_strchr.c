/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:10:31 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/29 13:10:34 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
		else
			str++;
	}
	return (0);
}
/*int	main(void)
{
	char a[] = "yujinkimkim";

	printf("%s\n", ft_strchr(a, 'k'));
	printf("%s\n", strchr(a, 'k'));

	return (0);
}*/