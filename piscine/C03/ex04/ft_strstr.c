/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:37:36 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/13 19:35:29 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!*to_find)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	a[] = "perfect weather outside!!";
	char	b[] = "ouioui";
	char	c[] = "out";
	char	d[] = "the";
	char	e[] = "";

	printf("%s\n", ft_strstr(b, c));
	printf("%s\n", ft_strstr(a, c));
	printf("%s\n", ft_strstr(a, d));
	printf("%s\n", ft_strstr(a, e));

	return (0);
}*/
