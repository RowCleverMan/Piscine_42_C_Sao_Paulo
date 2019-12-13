/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 12:44:43 by robitett          #+#    #+#             */
/*   Updated: 2019/11/24 09:57:58 by robitett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	rush(int x, int y);

int		main(void)
{
	printf("5 , 3\n");
	rush(5, 3);
	printf("-------------\n\n");


	printf("5 , 1\n");
	rush(5, 1);	
	printf("--------------\n\n");

	
	printf("1 , 1\n");
	rush(1, 1);
	printf("---------------\n\n");


	printf("1 , 5\n");
	rush(1, 5);	
	printf("-----------\n\n");
	
	printf("4 , 4\n");
	rush(4, 4);
	printf("-----------\n\n");
	
	printf("0 , 0\n");
	rush(0, 0);
	printf("-------------\n\n");
	
	printf("0 , 5\n");
	rush(0, 5);
	printf("---------------\n\n");
	
	printf("5 , 0\n");
	rush(5, 0);
	printf("----------------\n\n");
	
	printf("5 , 2\n");
	rush(5, 2);
	printf("------------------\n\n");
	
	printf("2 , 5\n");
	rush(2, 5);
	printf("-------------------\n\n");
	
	printf("2 , 2\n");
	rush(2, 2);
	printf("-------------------\n\n");

	printf("-1 , 2\n");
	rush(-1, 2);
	printf("-------------------\n\n");

	printf("2 , -1\n");
	rush(2, -1);
	printf("-------------------\n\n");

	printf("-1 , -2\n");
	rush(-1, -2);
	printf("-------------------\n\n");
	return (0);
}
