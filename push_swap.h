/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:33:54 by rodrigo           #+#    #+#             */
/*   Updated: 2023/01/06 16:48:06 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

/* Structure */

typedef struct s_all
{
	int	*array;
	int	size;
}			t_all;


/* Chekers */

int		check_int (char **argv);
int		check_double (char **argv);
int		ft_compare_nums(const char *s1, const char *s2);
int		all_checker(char **argv);


/* Array Creation */

void	create_arr(t_all *all, int argc, char **argv);

/* Performed Operations */

void	sa(t_all *all);

/* Algorithm */

int	get_index(t_all *all);

/* Utils */

// int	ft_atoi(const char *str);

#endif