/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_clues.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 00:33:05 by robitett          #+#    #+#             */
/*   Updated: 2019/12/01 19:31:28 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		from_down(int *matrix, int *clues, int col, int size)
{
	int i;
	int count;

	i = 3;
	count = 1;
	while (i > 0)
	{
		if (*(matrix + (col * size) + i) < *(matrix + (col * size) + i - 1))
			count++;
		i--;
	}
	if (count == *(clues + (2 * size) + col))
		return (1);
	else
		return (0);
}

int		from_left(int *matrix, int *clues, int row, int size)
{
	int i;
	int count;

	i = 0;
	count = 1;
	while (i < 3)
	{
		if (*(matrix + (row * size) + i) < *(matrix + (row * size) + i + 1))
			count++;
		i++;
	}
	if (count == *(clues + (2 * size) + row))
		return (1);
	else
		return (0);
}

int		from_right(int *matrix, int *clues, int row, int size)
{
	int i;
	int count;

	i = 3;
	count = 1;
	while (i > 0)
	{
		if (*(matrix + (row * size) + i) < *(matrix + (row * size) + i - 1))
			count++;
		i--;
	}
	if (count == *(clues + (3 * size) + row))
		return (1);
	else
		return (0);
}

int		check_previous_rowcol(int *matrix, int size, int cursor)
{
	int cur_row;
	int cur_col;
	int cur_number;
	int i;

	cur_col = cursor % size;
	cur_row = cursor / size;
	cur_number = *(matrix + cursor);
	i = 0;
	while (i < cur_row)
	{
		if (*(matrix + (i * size) + cur_col) == cur_number)
			return (1);
		i++;
	}
	i = 0;
	while (i < cur_col)
	{
		if (*(matrix + (cur_row * size) + i) == cur_number)
			return (1);
		i++;
	}
	return (0);
}

int		check_end_of_row(int *matrix, int *clues, int size, int cursor)
{
	int row;
	int col;

	col = cursor % size;
	row = cursor / size;
	if ((cursor + 1) % (size) == 0)
	{
		if (from_right(matrix, clues, row, size) == 0)
			return (1);
		if (from_left(matrix, clues, row, size) == 0)
			return (1);
	}
	return (0);
}
