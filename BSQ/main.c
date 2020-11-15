/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:41:21 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 16:41:22 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1 && read_file(argc, argv[0]) == 0)
	{
		ft_msg_error();
		return (0);
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			if (read_file(argc, argv[i]) == 0)
			{
				ft_msg_error();
				break ;
			}
			i++;
		}
	}
	return (0);
}
