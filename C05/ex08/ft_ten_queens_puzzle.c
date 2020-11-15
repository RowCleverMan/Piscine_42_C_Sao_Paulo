/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:55:30 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 16:55:33 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int board[][10])
{
	int x;
	int y;
	int c;

	y = 0;
	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			if (board[x][y])
			{
				c = x + 48;
				write(1, &c, 1);
			}
			x++;
		}
		y++;
	}
	write(1, "\n", 1);
}

int		ft_is_safe(int board[][10], int row, int col)
{
	int i;
	int j;

	i = 0;
	while (i < col)
	{
		if (board[row][i++])
			return (0);
	}
	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (board[i--][j--])
			return (0);
	}
	i = row;
	j = col;
	while (i < 10 && j >= 0)
	{
		if (board[i++][j--])
			return (0);
	}
	return (1);
}

int		ft_place_queen(int board[][10], int col)
{
	int			row;
	static int	res;

	if (col == 10)
	{
		ft_print(board);
		res++;
		return (1);
	}
	row = 0;
	while (row < 10)
	{
		if (ft_is_safe(board, row, col))
		{
			board[row][col] = 1;
			ft_place_queen(board, col + 1);
			board[row][col] = 0;
		}
		row++;
	}
	return (res);
}

int		ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ft_place_queen(board, 0));
}
