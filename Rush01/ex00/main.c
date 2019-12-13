/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 23:59:22 by robitett          #+#    #+#             */
/*   Updated: 2019/12/01 19:27:00 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		from_up(int *matrix, int *clues, int col, int size);
int		from_left(int *matrix, int *clues, int row, int size);
int		from_right(int *matrix, int *clues, int row, int size);
int		iterate(int *array, int *clues, int size, int cursor);
void	ft_print_array(int *array, int size);
void	ft_init_tab(char args[], int matrix[][4], int clues[][4]);
int		ft_get_max_number(int *table, int *clues, int size, int pos);
int		check_previous_rowcol(int *matrix, int size, int cursor);
int		check_end_of_row(int *matrix, int *clues, int size, int cursor);
void	ft_putnbr(int nb);

int		main(int argc, char **argv)
{
	int matrix[4][4];
	int clues[4][4];
	int i;

	if (argc != 2)
		return (0);
	ft_init_tab(argv[1], matrix, clues);
	i = 0;
	while (i < 16)
	{
		ft_get_max_number(&matrix[0][0], &clues[0][0], 4, i);
		i++;
	}
	iterate(&matrix[0][0], &clues[0][0], 4, 0);
	ft_print_array(&matrix[0][0], 4);
	return (0);
}

int		iterate(int *matrix, int *clues, int size, int cursor)
{
	while ((*(matrix + cursor) <
				ft_get_max_number(matrix, clues, size, cursor)))
	{
		if ((check_previous_rowcol(matrix, size, cursor)) &&
				(check_end_of_row(matrix, clues, size, cursor)))
		{
			*(matrix + cursor) += 1;
		}
		if (iterate(matrix, clues, size, cursor++))
			return (1);
		*(matrix + cursor) -= 1;
	}
	return (0);
}

int		from_up(int *matrix, int *clues, int col, int size)
{
	int i;
	int count;

	i = 0;
	count = 1;
	while (i < 3)
	{
		if (*(matrix + (i * size) + col) < (*(matrix + (i * size) + col + 1)))
			count++;
		i++;
	}
	if (count == *(clues + col))
		return (1);
	else
		return (0);
}
