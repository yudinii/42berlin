/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:36:02 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/11 13:39:59 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	size;

int	check_top(int **board, int *input_num)
{
	int	col;
	int	row;
	int	max_height;
	int	visible_num;

	col = 0;
	row = 0;
	max_height = 0;
	visible_num = 0;
	while (col < size - 1)
	{
		if (board[col][row] > max_height)
		{
			max_height = board[col][row];
			visible_num++;
		}
		row++;
	}
	if (visible_num != input_num[col])
		return(0);
	col++;
	return (1);
}

int	check_left(int **board, int *input_num)
{
	int	col;
	int	row;
	int	max_height;
	int	visible_num;

	col = 0;
	row = 0;
	max_height = 0;
	visible_num = 0;
	while (row < size - 1)
	{
		if (board[col][row] > max_height)
		{
			max_height = board[col][row];
			visible_num++;
		}
		col++
	}
	if (visible_num != input_num[row])
		return (0);
	row++;
	return (1);
}

int	check_bottom(int **board, int *input_num)
{
        int     col;
        int     row;
        int     max_height;
        int     visible_num;

        col = 0;
        row = 3;
        max_height = 0;
        visible_num = 0;
	while (col < size - 1)
	{
		if (board[col][row] > max_height)
		{
			max_height = board[col][row];
			visible_num++;
		}
		row--;
	}
	if (visible_num != input_num)
		return (0);
	col++;
	return (1);
}
int	check_right(int **board, int *input_num)
{
        int     col;    
        int     row;
        int     max_height;
        int     visible_num;

        col = 3;
        row = 0;
        max_height = 0;
        visible_num = 0;
	while (row < size - 1)
	{
		if (board[col][row] > max_height)
		{
			max_height = board[col][row];
			visible_num++;
		}
		col--;
	}
	if (visible_num != input_num[row])
		return (0);
	row++;
	return (1);
}
