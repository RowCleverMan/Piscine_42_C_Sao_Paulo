/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:41:32 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 16:41:33 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_verif_map(void)
{
	if (check_min() == 0 || check_breakline() == 0 || check_chars() == 0)
	{
		return (0);
	}
	else
		return (1);
}

int		check_min(void)
{
	if (map[0].col < 1 || map[0].row < 1)
		return (0);
	return (1);
}

int		check_breakline(void)
{
	int i;
	int qty;

	i = 0;
	qty = 0;
	while (map[0].map[i] != '\0')
	{
		if (map[0].map[i] == '\n')
			qty++;
		i++;
	}
	if (qty == map[0].row)
		return (1);
	else
		return (0);
}

int		check_chars(void)
{
	int i;

	i = 0;
	while (map[0].map[i] != '\0')
	{
		if (map[0].map[i] == map[0].full)
			return (0);
		if (!(map[0].map[i] == map[0].empty || map[0].map[i] == map[0].obstacle
			|| map[0].map[i] == '\n'))
			return (0);
		i++;
	}
	return (1);
}
