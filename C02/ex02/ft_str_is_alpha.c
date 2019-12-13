/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 23:38:22 by robitett          #+#    #+#             */
/*   Updated: 2019/11/24 22:50:48 by robitett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;
	int is_alpha;

	is_alpha = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= 'a' && str[i] <= 'z'))
			is_alpha = 1;
		else
			return (0);
		i++;
	}
	return (is_alpha);
}
