/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:59:07 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/18 17:07:42 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		       i++;
		else
			return(s1[i] - s2[i]);	
	}
	return(s1[i] - s2[i]);
}

int	main(void)
{
	char	a[] = "apple";
	char	b[] = "applebanana";
	char	c[] = "apple";

	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", ft_strcmp(a, c));
	return(0);
}
