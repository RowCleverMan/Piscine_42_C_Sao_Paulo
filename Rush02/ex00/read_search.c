/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Procurar_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:13:26 by robitett          #+#    #+#             */
/*   Updated: 2019/12/09 11:45:57 by robitett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

struct	s_referencia
{
	char algarismo[40];
	char extenso[50];
};

struct s_referencia numero[500];
static int g_count_words;

void	ft_fill(char *buf)
{
	int i;
	int k;
	int l;

	i = 0;
	k = 0;
	while (buf[i] != '\0')
	{
		l = 0;
		while (buf[i] != ' ' && buf[i] != ':')
			numero[k].algarismo[l++] = buf[i++];
		numero[k].algarismo[l] = '\0';
		l = 0;
		while (buf[i] == ' ' || buf[i] == ':')
			i++;
		while (buf[i] != '\n')
			numero[k].extenso[l++] = buf[i++];
		numero[k].extenso[l] = '\0';
		k++;
		i++;
	}
}

int		ft_check_values(char *buf, int i, int j)
{
	while (buf[i] != '\0')
	{
		while (buf[i] != ':')
		{
			if ((buf[i] >= '0' && buf[i] <= '9') || buf[i] == ' ')
				j++;
			i++;
		}
		while (buf[i] != '\n')
		{
			if (ft_char_is_printable(buf[i]))
				j++;
			if (buf[i + 1] == '\n')
				j++;
			i++;
		}
		i++;
		if (i != j)
			return (0);
	}
	return (1);
}

int		ft_read(char *dict_name)
{
	int		fd;
	int		ret;
	char	buf[10000];

	g_count_words = 0;
	fd = open(dict_name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ret = read(fd, buf, 10000);
	buf[ret] = '\0';
	close(fd);
	if (!(ft_check_values(buf, 0, 0)))
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_fill(buf);
	return (1);
}

int		ft_strcmp(char *argumento, int k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (argumento[i] != '\0')
		i++;
	while (argumento[j] != '\0')
	{
		if (argumento[j] == numero[k].algarismo[j])
			j++;
		else
			return (1);
	}
	if (j == i)
		return (0);
	else
		return (1);
}

int		ft_search(char *argumento)
{
	int k;
	int ret;

	k = 0;
	while (k <= 41)
	{
		ret = ft_strcmp(argumento, k);
		if (ret == 0)
		{
			if (g_count_words == 0)
			{
				ft_putstr(numero[k].extenso);
				g_count_words++;
			}
			else
			{
				ft_putstr(" ");
				ft_putstr(numero[k].extenso);
				g_count_words++;
			}
			return (0);
		}
		k++;
	}
	return (0);
}
