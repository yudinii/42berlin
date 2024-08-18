/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:35:57 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/14 11:41:46 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*int	main(void)
{
	char	a[] = "examexam";
	char	b[] = "let me take the exam";

	printf("%d\n", ft_strlen(a));
       	printf("%lu\n", strlen(a));
        printf("%d\n", ft_strlen(b));
        printf("%lu\n", strlen(b));

	return (0);
}*/
