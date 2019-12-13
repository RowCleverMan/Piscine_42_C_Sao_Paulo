/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtenor-f <gtenor-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 14:38:18 by robitett          #+#    #+#             */
/*   Updated: 2019/12/09 11:47:11 by robitett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

int		is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' ||
		c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
		}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (str[i] - '0') + (nb * 10);
		i++;
	}
	return (nb * neg);
}

int		str_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
