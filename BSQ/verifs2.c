/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifs2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:41:35 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 16:41:36 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check_row_size(void)
{
	int i;

	i = 0;
	while (map[0].map[i] != '\0')
		i++;
	if ((i - map[0].row) != (map[0].row * map[0].col))
		return (0);
	return (1);
}

int		check_row_qty(void)
{
	int i;
	int row_count;

	i = 0;
	row_count = 0;
	while (map[0].map != '\0')
	{
		if (map[0].map)
			row_count++;
		i++;
	}
	if (row_count != map[0].row)
		return (0);
	else
		return (1);
}
