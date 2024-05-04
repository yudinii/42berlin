/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:42:25 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/27 15:42:27 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int n)
{
	int	len;

	len = 0;
	while (len < n - 1)
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	while (src[len] != '\0')
		len++;
	return (len);
}
/*int	main(void)
{
	char	a[] = "abcdefghijklmnopqrstuvwxyz";
	char	b[] = "abcdefg";

	//strlcpy(b+7, a, 20);
	printf("%d\n", ft_strlcpy(b+7, a, 20));
	printf("b:%s\n", b);
	return (0);
}*/