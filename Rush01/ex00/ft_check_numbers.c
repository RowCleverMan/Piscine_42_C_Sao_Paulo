/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:02:17 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 17:02:29 by romanbtt         ###   ########.fr       */
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
