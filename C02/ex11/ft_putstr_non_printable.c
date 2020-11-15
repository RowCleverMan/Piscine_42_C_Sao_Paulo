/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:51:35 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 16:51:36 by romanbtt         ###   ########.fr       */
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
