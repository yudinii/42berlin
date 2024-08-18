/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:56:13 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/10 12:50:18 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_new_word(int new, char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (new == 1)
				*str -= 32;
			new = 0;
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			if (new != 1)
				*str += 32;
			new = 0;
		}
		else if (*str >= '0' && *str <= '9')
			new = 0;
		else
			new = 1;
		str++;
	}
	return (new);
}

char	*ft_strcapitalize(char *str)
{
	char	*capitalize;
	int		new;

	capitalize = str;
	new = 1;
	ft_new_word(new, str);
	return (capitalize);
}
/*int	main(void)
{
	char	a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	b[] = "sAlUt, cOmment tU vAS ? 42Mots";

	printf("%s\n", ft_strcapitalize(a));
	printf("%s\n", ft_strcapitalize(b));

	return (0);
}*/
