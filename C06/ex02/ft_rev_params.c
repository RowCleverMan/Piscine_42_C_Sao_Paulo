/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <robitett@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 21:41:19 by robitett          #+#    #+#             */
/*   Updated: 2019/11/29 15:40:48 by robitett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	while (argc != 1)
	{
		ft_putstr(argv[argc - 1]);
		argc--;
		write(1, "\n", 1);
	}
}
