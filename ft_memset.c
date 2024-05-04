/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:06:29 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/25 11:27:34 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h> 

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	int				i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}
/*int	main(void)
{
	char	a[] = "i have german class today";

	printf("Before memset(): %s\n", a);

	//memset(a+7, '?', 6*sizeof(char));
	ft_memset(a+7, '?', 6*sizeof(char));
	printf("After memset(): %s\n", a);
	
	return (0);
}*/
