/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:40:24 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/11 15:45:56 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int*	ft_input_num(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	int	*array = malloc(sizeof(int)*16);

	if (!array)
		return (0);
	while (str[i] !='\0')
	{
		if (str[i] == ' ')
			i++;
		array[j] = str[i] - '0';
		j++;
		i++;
	}
	return(array);
}


/*int	main(void)
{
	char input_str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	int *array;
	int i;

	i = 0;
	array=input_num(input_str);
	while (i < 16)
	{
		printf("%d", array[i]);
		i++;
	}
}*/
