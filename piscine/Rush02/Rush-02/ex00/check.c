/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:47:18 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/18 17:19:42 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

void	ft_temp(char *number, char *dict, int index, int pos)
{
	char	*temp;

	temp = ft_toprint(number, index, pos);
	if (index == 0 && pos == 0)
		ft_print_nbr(dict, temp, 0);
	else
		ft_print_nbr(dict, temp, 1);
	free(temp);
}

void	ft_check3(char *dict, char *number, int index, int len)
{
	char	*temp;

	if (index + 2 < len)
	{
		if (number[index] != '0')
		{
			ft_temp(number, dict, index, 0);
			ft_print_nbr(dict, "100", 1);
		}
		if (number[index + 1] != '0')
			ft_temp(number, dict, index + 1, 1);
		if (number[index + 2] != '0')
			ft_temp(number, dict, index + 2, 2);
		if (ft_if_zeros(number, index) && index != len - 3)
		{
			temp = ft_zeros(len, index, 3);
			ft_print_nbr(dict, temp, 1);
			free(temp);
		}
		ft_check3(dict, number, index + 3, len);
	}
	else
		write(1, "\n", 1);
}

void	ft_check2(char *dict, char *number, int index, int len)
{
	char	*temp;

	temp = ft_toprint(number, index, 1);
	ft_print_nbr(dict, temp, 0);
	free(temp);
	if (number[index + 1] != '0')
	{
		temp = ft_toprint(number, index + 1, 2);
		ft_print_nbr(dict, temp, 1);
		free(temp);
	}
	if (index != len - 2)
	{
		temp = ft_zeros(len, index, 2);
		ft_print_nbr(dict, temp, 1);
		free(temp);
	}
	ft_check3(dict, number, 2, len);
}

void	ft_check1(char *dict, char *number, int index, int len)
{
	char	*temp;

	temp = ft_toprint(number, index, 2);
	ft_print_nbr(dict, temp, 0);
	free(temp);
	if (index != len - 1)
	{
		temp = ft_zeros(len, index, 1);
		ft_print_nbr(dict, temp, 1);
		free(temp);
	}
	ft_check3(dict, number, 1, len);
}

void	ft_check_number(char *dict, char *nbr)
{
	int	len;

	len = ft_strlen(nbr);
	if (len % 3 == 0)
		ft_check3(dict, nbr, 0, len);
	if ((len + 1) % 3 == 0)
		ft_check2(dict, nbr, 0, len);
	if ((len + 2) % 3 == 0)
		ft_check1(dict, nbr, 0, len);
}
