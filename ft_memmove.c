/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:23:42 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/27 15:23:44 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
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
	char	a[] = "my name is yujin";
	char	b[] = "kim";

	//memmove(a+11, b, sizeof(char)*3);
	ft_memmove(a+11, b, sizeof(char)*3);

	printf("a:%s\n", a);
	printf("b:%s\n", b);
	return(0);
}*/