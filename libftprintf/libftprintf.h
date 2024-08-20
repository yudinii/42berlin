/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:17:11 by yujkim            #+#    #+#             */
/*   Updated: 2024/08/20 17:17:14 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h> //write
#include <stdlib.h> //malloc free
#include <stdarg.h> //va_list, va_start, va_arg, va_end

#define BUF_SIZE    (1<<12)

typedef struct  s_format
{
    bool    left_justified;
    bool    plus;
    bool    space;
    bool    hash;
    bool    zero_pad;
    char    specifier;
    int width_value;
    int precision_value;
}               t_format;

typedef struct  s_data
{
    const char  *s;
    va_list ap;
    int chars_written;
    char    *buffer;
    int buffer_index;

    t_format    format;
}               t_data;