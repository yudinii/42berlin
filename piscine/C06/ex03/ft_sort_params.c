/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:12:48 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/21 15:57:21 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc - 1)
	{
		while (argv[i][j] != '\0')
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap(&argv[i], &argv[i + 1]);
			i++;
			j++;
		}
	}	
	while (i < argc)
	{
		write (1, argv[i], ft_strlen(argv[i]));
		write (1, "\n", 1);
		i++;
	}
*	return (0);
}
