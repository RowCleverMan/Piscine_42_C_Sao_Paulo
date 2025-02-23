/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:03:45 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 17:04:19 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

int		main(int argc, char **argv)
{
	if (argc != 3 && argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	args_1(argc, argv);
	args_2(argc, argv);
	return (0);
}

int		args_1(int argc, char **argv)
{
	if (argc == 2)
	{
		if (str_len(argv[1]) > 39)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (!(ft_read("numbers.dict")))
			return (0);
		if (!(check_number(argv[1])))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (check_zero(argv[1]))
		{
			ft_search("0");
			write(1, "\n", 1);
			return (0);
		}
		mod_3(clean_number(argv[1]));
		write(1, "\n", 1);
	}
	return (1);
}

int		args_2(int argc, char **argv)
{
	if (argc == 3)
	{
		if (str_len(argv[2]) > 39)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (!(ft_read(argv[1])))
			return (0);
		if (!(check_number(argv[2])))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (check_zero(argv[2]))
		{
			ft_search("0");
			write(1, "\n", 1);
			return (0);
		}
		mod_3(clean_number(argv[2]));
		write(1, "\n", 1);
	}
	return (1);
}
