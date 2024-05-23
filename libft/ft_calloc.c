/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:48:51 by yujkim            #+#    #+#             */
/*   Updated: 2024/05/04 14:48:53 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if ((nmemb && size) && ((nmemb * size < size) || (nmemb * size < nmemb)))
		return (0);
	result = malloc(nmemb * size);
	if (!result)
		return (0);
	ft_bzero(result, (nmemb * size));
	return (result);
}
