/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:31:04 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/21 12:00:22 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	i = 1;
	while (i < argc)
	{
		len = 0;
		while (argv[i][len] != '\0')
			len++;
		write (1, argv[i], len);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
