/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:58:19 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/12 14:22:41 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char i)
{
	write (1, &i, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= ' ' && *str <= '~')
		{
			ft_putchar('\\');
			ft_putchar("0123456789ABCDEF"[(*str >> 4) & 0xF]);
			ft_putchar("0123456789ABCDEF"[*str & 0xF]);
		}
		else
			ft_putchar(*str);
		str++;
	}
	*str = '\0';
}
int	main(void) 
{
       	char str[] = "Coucou\ntu vas bien ?";
	printf("Original string: %s\n", str);
    	printf("Converted string: ");
    	ft_putstr_non_printable(str);
    	printf("\n");
    	return (0);
}
