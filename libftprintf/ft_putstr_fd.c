/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:42:03 by yujkim            #+#    #+#             */
/*   Updated: 2024/05/13 14:42:04 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write (fd, s, ft_strlen((char *)s));
}
