/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 09:46:51 by robitett          #+#    #+#             */
/*   Updated: 2019/11/28 09:19:42 by robitett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int first, int second)
{
	if (first <= 9)
	{
		ft_putchar('0');
		ft_putchar(first + 48);
	}
	else
	{
		ft_putchar(first / 10 + 48);
		ft_putchar(first % 10 + 48);
	}
	ft_putchar(' ');
	if (second <= 9)
	{
		ft_putchar('0');
		ft_putchar(second + 48);
	}
	else
	{
		ft_putchar(second / 10 + 48);
		ft_putchar(second % 10 + 48);
	}
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_display(first, second);
			if (first == 98)
				return ;
			ft_putchar(',');
			ft_putchar(' ');
			second++;
		}
		first++;
	}
}

int		main(void)
{
	ft_print_comb2();
}
