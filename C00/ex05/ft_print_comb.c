/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:42:59 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 16:43:00 by romanbtt         ###   ########.fr       */
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
