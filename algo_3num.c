/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:59:24 by rodrigo           #+#    #+#             */
/*   Updated: 2023/02/02 16:47:03 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* For this algo we only need Stack A. We wont need operations of Stack B */

void small_algo(t_node *stack_a)
{
	if (get_max == 2 && get_min == 1)
		sa(stack_a);
	else if (get_max == 0 && get_min == 2)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (get_max == 0 && get_min == 1)
		ra(stack_a);
	else if (get_max == 1 && get_min == 2)
		rra(stack_a);
	else
	{
		sa(stack_a);
		ra(stack_a);
	}
}
