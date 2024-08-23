/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:23:20 by yujkim            #+#    #+#             */
/*   Updated: 2024/05/13 14:23:21 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
