/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:31:43 by robitett          #+#    #+#             */
/*   Updated: 2019/12/05 21:41:12 by robitett         ###   ########.fr       */
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

