/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:02:27 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/27 15:02:30 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*int	main(void)
{
	char	a[] = "guten tag";
	char	b[] = "good";

	//memcpy(a, b, 5);
	ft_memcpy(a, b, 4);
	printf("a:%s\n", a);
	printf("b:%s\n", b);
	return(0);
}*/