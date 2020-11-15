/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:02:11 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 17:02:30 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_min(int *tab, int size)
{
	int i;
	int swap;

	i = 0;
	while (i <= size - 2)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
		{
			i++;
		}
	}
	return (tab[0]);
}
