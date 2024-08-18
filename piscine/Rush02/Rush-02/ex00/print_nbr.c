/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:51:10 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/18 18:57:13 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i])
		i++;
	if (str2[i] == '\0')
	{
		while (str1[i] == ' ' || str1[i] == ':')
			i++;
		return (i);
	}
	return (0);
}

int	ft_rm_spaces(char *dict, int i)
{
	while (dict[i] == ' ')
		i++;
	if (dict[i] != '\n')
		return (i - 1);
	else
		return (i);
}

void	ft_print_nbr(char *dict, char *nbr, int type)
{
	int	i;

	i = -1;
	while (i++ < ft_strlen(dict) - 1)
	{
		if (dict[i] == nbr[0])
		{
			if (ft_strcmp((dict + i), nbr))
			{
				i = i + ft_strcmp((dict + i), nbr);
				if (type)
					write(1, " ", 1);
				while (dict[i] >= 32 && dict[i] <= 126)
				{
					if (dict[i] == ' ')
						i = ft_rm_spaces(dict, i);
					if (dict[i] == '\n')
						break ;
					write(1, &dict[i], 1);
					i++;
				}
				break ;
			}
		}
	}
}

char	*ft_zeros(int len, int index, int j)
{
	int		i;
	char	*str;

	i = 1;
	str = (char *)malloc(39 + 1 * sizeof(char));
	str[0] = '1';
	while (i <= len - (index + j))
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_toprint(char *number, int index, int pos)
{
	char	*str;

	str = (char *)malloc(39 + 1 * sizeof(char));
	if (pos == 0)
	{
		str[0] = number[index];
		str[1] = '\0';
	}
	if (pos == 1)
	{
		str[0] = number[index];
		if (number[index] == '1')
			str[1] = number[index + 1];
		else
			str[1] = '0';
		str[2] = '\0';
	}
	if (pos == 2 && number[index - 1] != '1')
	{
		str[0] = number[index];
		str[1] = '\0';
	}
	return (str);
}
