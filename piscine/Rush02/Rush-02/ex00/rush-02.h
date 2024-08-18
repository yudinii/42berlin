/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroux <aroux@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:00:28 by aroux             #+#    #+#             */
/*   Updated: 2024/02/18 17:16:23 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int		ft_strlen(char *str);
char	*ft_atoi(char *str);
char	*ft_manage_dict(char *dict_name);
void	ft_print_nbr(char *dict, char *nbr, int type);
char	*ft_toprint(char *number, int index, int pos);
char	*ft_zeros(int len, int index, int j);
void	ft_check3(char *dict, char *number, int index, int len);
void	ft_check2(char *dict, char *number, int index, int len);
void	ft_check1(char *dict, char *number, int index, int len);
void	ft_check_number(char *dict, char *nbr);
int		ft_if_zeros(char *nbr, int i);
