/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod_3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 12:50:01 by robitett          #+#    #+#             */
/*   Updated: 2019/12/08 18:45:18 by robitett         ###   ########.fr       */
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
