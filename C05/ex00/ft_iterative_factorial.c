/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:55:36 by robitett          #+#    #+#             */
/*   Updated: 2019/12/05 14:14:44 by robitett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int res;

	res = 1;
	i = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}
