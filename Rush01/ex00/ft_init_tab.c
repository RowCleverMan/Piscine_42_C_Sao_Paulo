/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:20:38 by robitett          #+#    #+#             */
/*   Updated: 2019/12/01 19:18:51 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_init_zero(int matrix[][4])
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			matrix[x][y] = 0;
			y++;
		}
		x++;
	}
}

void	ft_up_down(int clues[][4], char args[])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i != 7)
	{
		if (args[i] >= '0' && args[i] <= '4')
		{
			clues[0][j] = args[i] - '0';
			j++;
		}
		i++;
	}
	i = 7;
	j = 0;
	while (i != 15)
	{
		if (args[i] >= '0' && args[i] <= '4')
		{
			clues[1][j] = args[i] - '0';
			j++;
		}
		i++;
	}
}

void	ft_left_right(int clues[][4], char args[])
{
	int i;
	int j;

	i = 15;
	j = 0;
	while (i != 23)
	{
		if (args[i] >= '0' && args[i] <= '4')
		{
			clues[2][j] = args[i] - '0';
			j++;
		}
		i++;
	}
	i = 23;
	j = 0;
	while (i != 31)
	{
		if (args[i] >= '0' && args[i] <= '4')
		{
			clues[3][j] = args[i] - '0';
			j++;
		}
		i++;
	}
}

void	ft_init_tab(char argv[], int matrix[][4], int clues[][4])
{
	ft_init_zero(matrix);
	ft_up_down(clues, argv);
	ft_left_right(clues, argv);
}
