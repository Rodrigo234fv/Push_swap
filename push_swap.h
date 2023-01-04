/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:33:54 by rodrigo           #+#    #+#             */
/*   Updated: 2023/01/04 13:39:20 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

/* Chekers */

int	check_int (char **argv);
int	check_double (char **argv);
int			ft_compare_nums(const char *s1, const char *s2);
int	all_checker(char **argv);

/* Utils */


int	ft_atoi(const char *str);

/* Structure */

typedef struct s_all
{
	int	*array;
	int	size;
}			t_all;


#endif