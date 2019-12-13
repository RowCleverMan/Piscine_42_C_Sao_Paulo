/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:39:50 by iwillens          #+#    #+#             */
/*   Updated: 2019/12/01 18:43:17 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_print_array(int *array, int size);
int		ft_get_min(int *array, int size);

int		*ft_get_clues(int pos, int *clues, int size)
{
	int			row;
	int			col;
	static int	clues_pos[4];

	row = (pos / size);
	col = (pos % size);
	clues_pos[0] = *(clues + col);
	clues_pos[1] = *(clues + col + size);
	clues_pos[2] = *(clues + row + (size * 2));
	clues_pos[3] = *(clues + row + (size * 3));
	return (clues_pos);
}

int		ft_get_max_number(int *table, int *clues, int size, int pos)
{
	int row;
	int col;
	int cur_number;
	int *clues_pos;
	int vmax[4];

	row = pos / size;
	col = pos % size;
	cur_number = *(table + pos);
	clues_pos = malloc(sizeof(int) * 4);
	clues_pos = ft_get_clues(pos, clues, 4);
	vmax[0] = size - (clues_pos[0] - row) + 1;
	vmax[1] = size - (clues_pos[1] - (size - row));
	vmax[2] = size - (clues_pos[2] - col) + 1;
	vmax[3] = size - (clues_pos[3] - (size - col));
	*(table + pos) = ft_get_min(vmax, 4);
	return (ft_get_min(vmax, 4));
}
