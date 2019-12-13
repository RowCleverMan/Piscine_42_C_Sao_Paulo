/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 22:30:25 by robitett          #+#    #+#             */
/*   Updated: 2019/12/05 14:45:44 by robitett         ###   ########.fr       */
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
