/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:03:42 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 17:04:20 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

int		check_number(char *number)
{
	int i;

	i = 0;
	while (number[i] != '\0')
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

char	*clean_number(char *number)
{
	int i;

	i = 0;
	while (number[i] == '0')
		i++;
	return (&number[i]);
}

int		check_zero(char *number)
{
	int i;

	i = 0;
	while (number[i] != '\0')
	{
		if (number[i] != '0')
			return (0);
		i++;
	}
	return (1);
}
