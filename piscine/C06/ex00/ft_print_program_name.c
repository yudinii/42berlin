/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:20:00 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/21 16:14:50 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;

	argc = 0;
	len = 0;
	while (argv[0][len] != '\0')
		len++;
	write(1, argv[0], len);
	write(1, "\n", 1);
	return (0);
}
