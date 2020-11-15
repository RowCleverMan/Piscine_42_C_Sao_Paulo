/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:41:29 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 16:41:30 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_file_size(char *map_file)
{
	int		fd;
	char	buff;
	int		size;

	fd = open(map_file, O_RDONLY);
	size = 0;
	if (fd >= 0)
	{
		while (read(fd, &buff, 1))
			size++;
		close(fd);
		return (size);
	}
	else
	{
		return (0);
	}
}

int		ft_size_1stline(char *map_file)
{
	int		fd;
	char	buff;
	int		size;

	fd = open(map_file, O_RDONLY);
	size = 0;
	if (fd >= 0)
	{
		while (read(fd, &buff, 1) && buff != '\n')
			size++;
		close(fd);
		return (size);
	}
	else
	{
		return (0);
	}
}

int		ft_size_map(char *map_file)
{
	int size;

	size = 0;
	size = ft_file_size(map_file) - ft_size_1stline(map_file);
	return (size);
}

int		ft_size_stdin(void)
{
	char	buff;
	int		size;

	size = 0;
	while (read(0, &buff, 1))
		size++;
	return (size);
}

int		ft_size_stdin_1stline(void)
{
	char	buff;
	int		size;

	size = 0;
	read(0, &buff, 1);
	while (read(0, &buff, 1) && buff != '\n')
	{
		size++;
	}
	return (size);
}
