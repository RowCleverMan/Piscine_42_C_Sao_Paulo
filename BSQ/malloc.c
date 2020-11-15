/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:41:24 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 16:41:24 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		**ft_allocate_mem_2d(int n, int m)
{
	int i;
	int **arr;

	i = 0;
	arr = (int**)malloc(n * sizeof(int*));
	while (i < n)
	{
		arr[i] = (int*)malloc(m * sizeof(int));
		i++;
	}
	return (arr);
}
