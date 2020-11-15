/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:57:05 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 16:57:10 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return (-1);
	while (min < max)
	{
		range[0][i++] = min;
		min++;
	}
	*range = tab;
	return (i);
}

