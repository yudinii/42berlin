/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:14:30 by yujkim            #+#    #+#             */
/*   Updated: 2024/08/15 18:14:33 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdarg.h>

int ft_max(int num, ...)
{
    va_list arg;
    va_start(arg, num);

    int max = 0;
    for(int i = 0; i < num; i++)
    {
        int current_max;
        current_max = va_arg(arg, int);
        if(i == 0)
            max = current_max;
        else if(current_max > max)
            max = current_max;
    }
    va_end(arg);
    return (max);
}

int main(void)
{
    printf("max num: %d", ft_max(5, 25, 15, 3, 120, 4));

    return (0);
}