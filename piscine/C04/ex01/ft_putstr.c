/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:43:02 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/14 12:00:41 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write (1, str, len);
}
/*int	main(void)
{
	char	a[] = "lunch time";
	char	b[] = "evaluation at 1pm";
 
	ft_putstr(a);
	ft_putstr("\n");
	ft_putstr(b);
        ft_putstr("\n");

	return (0);
}*/
