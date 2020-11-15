/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod_3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:03:54 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 17:04:19 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

void	mod_3(char *number)
{
	int lenght;
	int mod;

	lenght = str_len(number);
	mod = lenght % 3;
	if (*number == '\0')
		return ;
	if (mod == 0)
	{
		hundred_place(number);
		type_number(lenght, number);
		mod_3(number + 3);
	}
	if (mod == 2)
	{
		ten_place(number);
		type_number(lenght, number);
		mod_3(number + 2);
	}
	if (mod == 1)
	{
		unity(number);
		type_number(lenght, number);
		mod_3(number + 1);
	}
}
