/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:38:38 by yujkim            #+#    #+#             */
/*   Updated: 2024/04/27 17:38:39 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# include <string.h>
//# include <stdio.h>
//# include <unistd.h>

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int n)
{
	int	s_len;
	int	d_initial_len;
	int	d_final_len;

	s_len = 0;
	d_initial_len = ft_strlen(dest);
	d_final_len = ft_strlen(dest);
	while (s_len < n - 1)
	{
		dest[d_final_len] = src[s_len];
		d_final_len++;
		s_len++;
	}
	dest[d_final_len] = '\0';
	while (src[s_len] != '\0')
		s_len++;
	return (d_initial_len + s_len);
}
/*int	main(void)
{
	char	a[] = "abcdefghijklmnopqrstuvwxyz";
	char	b[] = "kuuuuuuk";

	printf("%d\n", ft_strlen(a));
	printf("%d\n", ft_strlen(b));
	printf("%d\n", ft_strlcat(b, a, 15));
	printf("dest: %s\n", b);
	
	int	i = 0;
	while (i < 50)
	{
		write(1, &b[i], 1);
		i++;
	}
	return (0);
}*/