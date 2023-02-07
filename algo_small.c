/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:59:24 by rodrigo           #+#    #+#             */
/*   Updated: 2023/02/07 16:21:28 by rodrigo          ###   ########.fr       */
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
	else if (get_max(stack_a) == 1 && get_min(stack_a) == 0)
	{
		sa(stack_a);
		ra(stack_a);
	}
}

/* 5 num algo !!!!!!!!!!!!! */

void	small_algo2(t_node **stack_a, t_node **stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	small_algo(stack_a);
	numsleft_3(stack_a, stack_b);
	numsleft_4(stack_a, stack_b);
}

/* Just a function to test the logic */

void stop_when_empty(t_node **stack_a, t_node **stack_b)
{
	while(*stack_a)
		pb(stack_a, stack_b);
}

void	numsleft_3(t_node **stack_a, t_node **stack_b)
{
	if (get_number(stack_b, 0) < get_number(stack_a, 0))
		pa(stack_a, stack_b);
	else if (get_number(stack_b, 0) < get_number(stack_a, 1))
	{
		pa(stack_a, stack_b);
		sa(stack_a);
	}
	else if (get_number(stack_b, 0) < get_number(stack_a, 2))
	{
		ra(stack_a);
		pa(stack_a, stack_b);
		sa(stack_a);
		rra(stack_a);
	}
	else
	{
		pa(stack_a, stack_b);
		ra(stack_a);
	}
}

/* Its working !!!!!!!!!! numsleft_3 */

void	numsleft_4(t_node **stack_a, t_node **stack_b)
{
	if (get_number(stack_b, 0) < get_number(stack_a, 0))
		pa(stack_a, stack_b);
	else if (get_number(stack_b, 0) < get_number(stack_a, 1))
	{
		pa(stack_a, stack_b);
		sa(stack_a);
	}
	else if (get_number(stack_b, 0) < get_number(stack_a, 2))
	{
		ra(stack_a);
		pa(stack_a, stack_b);
		sa(stack_a);
		rra(stack_a);
	}
	else if (get_number(stack_b, 0) < get_number(stack_a, 3))
	{
		rra(stack_a);
		pa(stack_a, stack_b);
		sa(stack_a);
		ra(stack_a);
	}
	else
	{
		pa(stack_a, stack_b);
		ra(stack_a);
	}
}