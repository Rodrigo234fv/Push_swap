/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:33:54 by rodrigo           #+#    #+#             */
/*   Updated: 2023/02/07 16:19:31 by rodrigo          ###   ########.fr       */
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

t_node		*create_list(int size, int *args);
int			list_size(t_node *stack);
void		print_list(t_node *stack);




/* Performed Operations */

void		sa(t_node **stack_a);
void		sb(t_node **stack_b);
void		ss(t_node **stack_a, t_node **stack_b);
void		pa(t_node **stack_a, t_node **stack_b);
void		pb(t_node **stack_a, t_node **stack_b);
void		ra(t_node **stack);
void		rra(t_node **stack);

/* Helper Functions */

int			get_max(t_node **stack);
int			get_min(t_node **stack);
int			get_max_num(t_node **stack);
int			get_number(t_node **stack, int n);

/* Algo For 3 & 5 nums */

void		small_algo(t_node **stack_a);
void		small_algo2(t_node **stack_a, t_node **stack_b);
void		stop_when_empty(t_node **stack_a, t_node **stack_b);
void		numsleft_3(t_node **stack_a, t_node **stack_b);
void		numsleft_4(t_node **stack_a, t_node **stack_b);

// int	ft_atoi(const char *str);

#endif