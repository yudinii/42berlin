/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_average.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:27:51 by yujkim            #+#    #+#             */
/*   Updated: 2024/08/15 16:27:57 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

float   ft_average(int num, ...)
{
    va_list ap;
    va_start(ap, num);

    int total;
    total = 0;
    for(int i = 0; i < num; ++i)
        total += va_arg(ap, int);
    va_end(ap);
    return((float)total / num);
}

int main(void)
{
    printf("the average is %.2f\n", ft_average(5, 3,4,5,6,78));
}