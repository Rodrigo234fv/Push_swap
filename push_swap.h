/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:33:54 by rodrigo           #+#    #+#             */
/*   Updated: 2023/02/02 12:55:53 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

/* Structure */

typedef struct s_all
{
	int	*array1;
	int	*array2;
	int	size;
	int	sizeb;
}			t_all;


/* Stack A & B (My Lists) */

typedef struct s_node {
	int	data;
	struct	s_node *next;
} t_node;



/* Chekers */

int			check_int (char **argv);
int			check_double (char **argv);
int			ft_compare_nums(const char *s1, const char *s2);
int			all_checker(char **argv);


/* List Creation */







/* Array Creation */

void		create_arr(t_all *all, int argc, char **argv);

/* Performed Operations */

void		sa(t_node *stack_a);
void		sb(t_node *stack_b);
void		ss(t_node *stack_a, t_node *stack_b);
void		pa(t_node **stack_a, t_node **stack_b);
void		pb(t_node **stack_a, t_node **stack_b);


/* Algorithm */

int			get_index(t_all *all);

/* Utils */

// int	ft_atoi(const char *str);

#endif