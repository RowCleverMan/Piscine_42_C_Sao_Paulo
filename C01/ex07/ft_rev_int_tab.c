/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 22:16:59 by robitett          #+#    #+#             */
/*   Updated: 2019/11/28 09:47:43 by robitett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;
	int end;

	end = size - 1;
	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[end];
		tab[end] = tmp;
		i++;
		end--;
	}
}
