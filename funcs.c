/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:11:20 by rodrigo           #+#    #+#             */
/*   Updated: 2023/02/02 16:30:46 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* This gets the position of the largest number in the List */

int get_max(t_node *stack)
{
	t_node	*temp;
	int		max_num;
	int		max_pos;
	int		pos;

	max_num = stack->data;
	max_pos = 0;
	pos = 0;
	temp = stack;
	while (temp != NULL)
	{
		if (temp->data > max_num)
		{
			max_num = temp->data;
			max_pos = pos;
		}
		pos++;
		temp = temp->next;
	}
	return (max_pos);
}

int get_min(t_node *stack)
{
	t_node	*temp;
	int		min_num;
	int		min_pos;
	int		pos;
	
	min_num = stack->data;
	min_pos = 0;
	pos = 0;
	temp = stack;
	while (temp != NULL)
	{
		if (temp->data < min_num)
		{
			min_num = temp->data;
			min_pos = pos;
		}
		pos++;
		temp = temp->next;
	}
	return (min_pos);
}