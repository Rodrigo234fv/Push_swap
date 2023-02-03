/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:59:24 by rodrigo           #+#    #+#             */
/*   Updated: 2023/02/03 18:40:28 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* 3 NUM ==> For this algo we only need Stack A. We wont need operations of Stack B */

void small_algo(t_node **stack_a)
{
	if (get_max(stack_a) == 2 && get_min(stack_a) == 1)
		sa(stack_a);
	else if (get_max(stack_a) == 0 && get_min(stack_a) == 2)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (get_max(stack_a) == 0 && get_min(stack_a) == 1)
		ra(stack_a);
	else if (get_max(stack_a) == 1 && get_min(stack_a) == 2)
		rra(stack_a);
	else
	{
		sa(stack_a);
		ra(stack_a);
	}
}

/* 5 num algo */

void	small_algo2(t_node **stack_a, t_node **stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	small_algo(stack_a);
	if (get_number(stack_b, 1) < get_number(stack_a, 1))
	{
		pa(stack_a, stack_b);
	}
	
}

void stop_when_empty(t_node **stack_a, t_node **stack_b)
{
	while(*stack_a)
		pb(stack_a, stack_b);
}