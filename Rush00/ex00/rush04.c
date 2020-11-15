/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:00:32 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 17:00:40 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_first(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('A');
		}
		else if (i == x - 1)
		{
			ft_putchar('C');
		}
		else if (i != 0 && i != x - 1)
		{
			ft_putchar('B');
		}
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_middle(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y - 2)
	{
		j = 0;
		while (j < x)
		{
			if (j == 0)
				ft_putchar('B');
			else if (j == x - 1)
				ft_putchar('B');
			else if (j != 0 && j != x - 1)
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	ft_print_last(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('C');
		}
		else if (i == x - 1)
		{
			ft_putchar('A');
		}
		else if (i != 0 && i != x - 1)
		{
			ft_putchar('B');
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	ft_print_first(x);
	if (y != 1)
	{
		ft_print_middle(x, y);
		ft_print_last(x);
	}
}
