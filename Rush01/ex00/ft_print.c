/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:02:59 by iwillens          #+#    #+#             */
/*   Updated: 2019/12/01 18:32:03 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

void	ft_print_array(int *array, int size)
{
	int cur_row;
	int cur_col;
	int	print_number;

	cur_row = 0;
	while (cur_row < size)
	{
		cur_col = 0;
		while (cur_col < size)
		{
			print_number = *(array + (cur_row * (size)) + cur_col);
			ft_putnbr(print_number);
			if (size - 1 == cur_col)
				ft_putchar('\n');
			else
				ft_putchar(' ');
			cur_col++;
		}
		cur_row++;
	}
}
