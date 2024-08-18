/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:40:24 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/18 17:15:37 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-02.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_if_zeros(char *nbr, int i)
{
	if (nbr[i] == '0' && nbr[i + 1] == '0' && nbr[i + 2] == '0')
		return (0);
	else
		return (1);
}

char	*ft_create_str(char *str, char c)
{
	char	*result;
	int		i;

	result = (char *)malloc(39 + 1 * sizeof(char));
	i = 0;
	while ((*str >= '0' && *str <= '9') && i <= 39)
	{
		result[i] = *str;
		str++;
		i++;
	}
	if (i == 0 && c == '0')
	{
		result[i] = '0';
		i++;
	}
	result[i] = '\0';
	if (i == 40)
		return ("Dict Error");
	else if (*str != '\0' || (i == 0 && *str == '\0'))
		return ("Error");
	else
		return (result);
}

char	*ft_atoi(char *str)
{
	int		sign;

	sign = 1;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	while (*str == '+' || *str == '-' || *str == '0')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	if (sign == -1)
		return ("Error");
	else
		return (ft_create_str(str, *(str - 1)));
}
