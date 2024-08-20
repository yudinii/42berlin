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
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	main(void)
{
	printf("[%-+d10]\n", 1992);
	printf("[%+010d]\n", 1992);
	//printf("[%-+010d]\n", -1992);
	printf("[%+010d]\n", 1992);
}

/*int	ft_printf(const char *format, ...)
{
	int	result;

	va_list ap;
	va_start(ap,) ;
}*/
