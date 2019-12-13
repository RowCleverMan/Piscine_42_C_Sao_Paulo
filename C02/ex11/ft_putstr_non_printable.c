/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 17:50:19 by robitett          #+#    #+#             */
/*   Updated: 2019/11/27 13:43:32 by robitett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 31)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			if (str[i] / 16 < 10)
				ft_putchar((str[i] / 16) + '0');
			if (str[i] % 16 < 10)
				ft_putchar((str[i] % 16) + '0');
			else
				ft_putchar((str[i] % 16) + 87);
		}
		i++;
	}
}
