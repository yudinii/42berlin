/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:31:25 by yujkim            #+#    #+#             */
/*   Updated: 2024/08/15 18:31:27 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int print_char(int c)
{
    return write(1, &c, 1);
}

int print_str(char *str)
{
    int result;

    result = 0;
    while (*str != '\0')
    {
        print_char(int(*str));
        ++result;
        ++str;
    }
    return result;
}

int print

int print_format(char specifier, va_list arg)
{
    int result;

    result = 0;
    if (specifier == 'c')
        result += print_char(va_arg(arg, int));
    // type promotion concept(?) why 'int' here? 
    else if (specifier == 's')
        result += print_str(va_arg(arg, char *));
    else if (specifier == 'd')
        result += print_digit((long)va_arg(arg, int), 10);
    // what is base digit '10'? why we need it?
    else if (specifier == 'x')
        result += print_digit((long)va_arg(arg, unsigned int), 16);
    else
        result += write(1, specifier, 1);
    return result;
}

int my_printf(const char *format, ...)
{
    va_list arg;
    va_start(arg, format);
    
    int result;
    
    result = 0;
    while (*format != '\0')
    {
        if (*format == '%')
            result += print_format(*(++format), arg);
        //"Hello %s, I'm ..." <- we will get 's' as a result
        else
            result += write(1, format, 1);
        ++format;
    }
    va_end (arg);
    return result;
}


