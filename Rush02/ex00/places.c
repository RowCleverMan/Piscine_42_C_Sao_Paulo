/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_place.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:21:16 by robitett          #+#    #+#             */
/*   Updated: 2019/12/08 18:46:52 by robitett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

void	hundred_place(char *number)
{
	char buff[3];

	buff[0] = number[0];
	buff[1] = number[1];
	if (buff[0] == '0' && buff[1] == '0')
	{
		unity(number + 2);
		return ;
	}
	buff[1] = buff[0];
	buff[2] = '\0';
	if (buff[0] != '0')
	{
		ft_search(&buff[1]);
		ft_search("100");
	}
	ten_place(number + 1);
}

void	ten_place(char *number)
{
	char buff[3];

	buff[0] = number[0];
	buff[1] = number[1];
	buff[2] = '\0';
	if (number[0] == '0')
	{
		unity(number + 1);
		return ;
	}
	if (ft_atoi(buff) <= 20 || ft_atoi(buff) % 10 == 0)
		ft_search(buff);
	else
	{
		buff[1] = '0';
		ft_search(buff);
		unity(number + 1);
	}
}

void	unity(char *number)
{
	char buff[2];

	buff[0] = number[0];
	buff[1] = '\0';
	if (number[0] == '0')
		return ;
	ft_search(buff);
}
