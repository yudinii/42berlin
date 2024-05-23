/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:48:44 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/25 11:48:48 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*int main(void)
{
    char    a[] = "i have German class today";

    printf("Before bzero(): %s\n", a);

    //bzero(a+7, 6*sizeof(char));
    ft_bzero(a+7, 6*sizeof(char));
    printf("After bzero(): %s\n", a);
    int i = 0;
    while (i < 30)
    {
        write(1,&a[i],1);
        i++;
    }
    return(0);
}*/