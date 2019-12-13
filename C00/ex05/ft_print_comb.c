/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 21:44:39 by robitett          #+#    #+#             */
/*   Updated: 2019/11/28 09:06:22 by robitett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(char f, char s, char t)
{
	ft_putchar(f);
	ft_putchar(s);
	ft_putchar(t);
	if (f == '7' && s == '8' && t == '9')
		return ;
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				ft_display(first, second, third);
				third++;
			}
			second++;
		}
			first++;
	}
}

int		main(void)
{
	ft_print_comb();
}
