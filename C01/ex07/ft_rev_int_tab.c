/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:47:49 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 16:47:50 by romanbtt         ###   ########.fr       */
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
