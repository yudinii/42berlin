/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:06:07 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/18 16:30:10 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

char	*ft_manage_dict(char *dict_name)
{
	char	*buffer;
	int		fd;
	ssize_t	bytes_read;

	buffer = (char *)malloc(999 + 1 * sizeof(char));
	fd = open(dict_name, O_RDONLY);
	if (fd == -1)
		write(1, "Dict Error\n", 11);
	bytes_read = read(fd, buffer, 1000);
	if (bytes_read == -1)
		write(1, "Dict Error\n", 11);
	if (close(fd) == -1)
		write(1, "Dict Error\n", 11);
	return (buffer);
}

void	ft_controller(char *dict, char *nbr)
{
	if (nbr[0] == 'E')
		write(1, "Error\n", 6);
	else if (nbr[0] == 'D')
		write(1, "Dict Error\n", 11);
	else
	{
		ft_check_number(dict, nbr);
		free(dict);
		free(nbr);
	}
}

int	main(int argc, char **argv)
{
	char	*nbr;
	char	*dict;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		dict = ft_manage_dict("numbers.dict");
		ft_controller(dict, nbr);
	}
	if (argc == 3)
	{
		nbr = ft_atoi(argv[2]);
		dict = ft_manage_dict(argv[1]);
		ft_controller(dict, nbr);
	}
	return (0);
}
