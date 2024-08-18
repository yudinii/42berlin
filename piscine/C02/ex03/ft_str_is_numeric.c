/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:32:35 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/09 17:07:45 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int	main(void)
{
	char	a[] = "012";
	char	b[] = "yujin12";

	printf("%d\n", ft_str_is_numeric(a));
	printf("%d\n", ft_str_is_numeric(b));

	return(0);
}*/
