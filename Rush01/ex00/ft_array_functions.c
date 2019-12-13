/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 18:10:26 by iwillens          #+#    #+#             */
/*   Updated: 2019/12/01 18:47:12 by dnascime         ###   ########.fr       */
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
