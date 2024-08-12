/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:22:58 by yujkim            #+#    #+#             */
/*   Updated: 2024/05/23 09:22:59 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libftprintf.h"
#include "stdio.h"

/*int	ft_printf(const char *format, ...)
{
	int	result;

	va_list ap;
	va_start(ap,) ;
}*/

int	main(void)
{
	//printf("%s\n", "flounder", "catfish", "clownfish", "shark");
	//printf("%s\n", "flounder" "catfish" "clownfish" "shark");
	printf("n: %s\n", "flounder catfish clownfish shark");
	printf("\"%s\"\n", "flounder catfish clownfish shark");
	printf("%s\\\n", "flounder catfish clownfish shark");
	printf("a: %s\a\n", "flounder catfish clownfish shark");
	printf("b: %s\b\n", "flounder catfish clownfish shark");
	//printf("%s\c", "flounder catfish clownfish shark");
	printf("e: %s\e\n", "flounder catfish clownfish shark");
	printf("r: %s\r\n", "flounder catfish clownfish shark");
	printf("t: %s\t\n", "flounder catfish clownfish shark");
	printf("v: %s\v\n", "flounder catfish clownfish shark"); 
	printf("%s\t%s\n", "flounder", "fish");

	return (0);
}