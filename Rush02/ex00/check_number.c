/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 12:45:18 by robitett          #+#    #+#             */
/*   Updated: 2019/12/08 18:37:28 by robitett         ###   ########.fr       */
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
