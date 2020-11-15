/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:57:03 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 16:57:10 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;
	
	i = 0;
	if (min >= max)
		return (0);
	array = malloc(sizeof(array) * max - min);
	while (min < max)
	{
		array[i++] = min;
		min++;
	}
	return (array);
}
