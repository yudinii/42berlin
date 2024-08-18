/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:38:08 by yujkim            #+#    #+#             */
/*   Updated: 2024/02/10 17:15:44 by yujkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int **board = (int **)malloc(4 * sizeof(int *));
	int i = 0;
	
	while (i < 4) 
	{
		board[i] = (int *)malloc(4 * sizeof(int));
		i++;
	}
	i = 0;
	while (i < 4) 
	{
		int j = 0;
		while (j < 4) 
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	if (ft_solve_puzzle(board, 0, 0)) 
	{
		char *solution = "Solution:\n";
		write(1, solution, 10);
		ft_print_puzzle(board);
	}
	else
	{
		char *no_solution = "No solution exists.\n";
		write(1, no_solution, 17);
	}
	i = 0;
	while (i < 4) 
	{
		free(board[i]);
		i++;
	}
	free(board);
	return (0);
}
