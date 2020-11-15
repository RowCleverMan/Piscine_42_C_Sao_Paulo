/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:42:48 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 16:42:49 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_indent(int *array, int n)
{
	
}

void	ft_print_array(int *array, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(array[i] + 48);
		i++;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_combn(int n)
{
	int	array [n];
	int i;

	i = 0;

	if (n < 1 && n > 10)
		return ;
	while (i < n)
	{
		array[i] = i;
		i++;
	}
		while (array[0] != 10 - n)
	{
		ft_print_array(array, n);
		ft_indent(array, n);
	}
}

int		main(void)
{
	ft_print_combn(6);
}
