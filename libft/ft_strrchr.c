/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:29:51 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/29 13:29:53 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int len;

	len = ft_strlen((char *)str);
	while (len > 0)
	{
		if (str[len - 1] == c)
			return ((char *)str + len - 1);
		else
			len--;
	}
	return (0);
}
/*int	main(void)
{
	char a[] = "yujinkimkim";

	printf("mine: %s\n", ft_strrchr(a, 'k'));
	printf("mine: %s\n", strrchr(a, 'k'));

	return (0);
}*/