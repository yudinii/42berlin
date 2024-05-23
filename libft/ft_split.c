/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:27:27 by yujkim            #+#    #+#             */
/*   Updated: 2024/05/14 12:27:28 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

static int	wordlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static int	wordset(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0' && *s != c)
			count++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (count);
}

static char	**fillsplit(char **result, const char *s, char c, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		while (*s != '\0' && *s == c)
			s++;
		result[i] = ft_substr(s, 0, wordlen(s, c));
		if (result[i] == NULL)
		{
			while (i > 0)
			{
				free(result[i - 1]);
				i--;
			}
			free (result);
			return (NULL);
		}
		s = s + wordlen(s, c);
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	num;

	num = wordset(s, c);
	result = (char **)malloc((num + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	return (fillsplit(result, s, c, num));
}
