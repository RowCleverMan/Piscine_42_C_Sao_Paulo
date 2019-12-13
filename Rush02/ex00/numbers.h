/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robitett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 12:59:03 by robitett          #+#    #+#             */
/*   Updated: 2019/12/08 19:18:26 by robitett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBERS_H
# define NUMBERS_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		str_len(char *str);
void	hundred_place(char *number);
void	ten_place(char *number);
void	unity(char *number);
int		ft_atoi(char *str);
void	type_number(int s, char *c);
int		ft_search(char *argumento);
int		ft_strcmp(char *argumento, int k);
int		ft_read(char *dict_name);
void	ft_putstr(char *str);
int		check_number(char *number);
void	mod_3(char *number);
char	*clean_number(char *number);
int		check_zero(char *number);
int		args_1(int argc, char **argv);
int		args_2(int argc, char **argv);
int		ft_char_is_printable(char c);
void	ft_putstr(char *str);
#endif
