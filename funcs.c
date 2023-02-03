/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:11:20 by rodrigo           #+#    #+#             */
/*   Updated: 2023/02/03 17:36:58 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* This gets the position of the largest number in the List */

int get_max(t_node **stack)
{
	t_node	*temp;
	int		max_num;
	int		max_pos;
	int		pos;

	max_num = (*stack)->data;
	max_pos = 0;
	pos = 0;
	temp = *stack;
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

int get_min(t_node **stack)
{
	t_node	*temp;
	int		min_num;
	int		min_pos;
	int		pos;
	
	min_num = (*stack)->data;
	min_pos = 0;
	pos = 0;
	temp = *stack;
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

/* This gets the largest number in the Linked List */

int get_max_num(t_node **stack)
{
	int	max;
	t_node	*current;
	
	max = (*stack)->data;
	current = (*stack)->next;
	while (current != NULL)
	{
		if (current->data > max)
		max = current->data;
		current = current->next;
	}
	return (max);
}

/* This gets a number on a List */
/* n is the position of the number ex: n = 0 ==> the first number */

int	get_number(t_node **stack, int n)
{
	t_node *current;
	int count;
	
	current = *stack;
	count = 1;
	if (n < 0)
		return (0);
	while (current != NULL && count <= n)
	{
		current = current->next;
		count++;
	}
	if (current == NULL) {
		return 0;
	}
	return (current->data);
}

