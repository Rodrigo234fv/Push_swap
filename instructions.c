/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:35:36 by rodrigo           #+#    #+#             */
/*   Updated: 2023/02/02 19:42:52 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* sa */

void	sa(t_node **stack_a)
{
	t_node	*first;
	t_node	*second;
	int		temp;
	
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	
	first = *stack_a;
	second = (*stack_a)->next;
	temp = first->data;
	first->data = second->data;
	second->data = temp;
}

/* sb */

void	sb(t_node **stack_b)
{
	t_node	*first;
	t_node	*second;
	int		temp;
	
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	
	first = *stack_b;
	second = (*stack_b)->next;
	temp = first->data;
	first->data = second->data;
	second->data = temp;
}


/* ss */

void ss(t_node **stack_a, t_node **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

/* pa */

void pa(t_node **stack_a, t_node **stack_b)
{
	t_node *temp;
	
	if (stack_b == NULL)
		return ;

	temp = *stack_b;
	*stack_b = temp->next;
	temp-> next = *stack_a;
	*stack_a = temp;
}

/* pb */

void pb(t_node **stack_a, t_node **stack_b)
{
	t_node *temp;
	
	if (stack_a == NULL)
		return ;

	temp = *stack_a;
	*stack_a = temp->next;
	temp-> next = *stack_b;
	*stack_b = temp;
}


/* ra */

void ra(t_node **stack)
{
	t_node	*temp;

	temp = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = *stack;
	*stack =(*stack)->next;
	temp->next->next = NULL;
}

/* rb */

/* rr */

/* rra */

void rra(t_node **stack)
{
	t_node	*temp;
	t_node	*last;
	
	temp = *stack;
	if(*stack == NULL || (*stack)->next == NULL)
		return ;
	while (temp->next->next != NULL)
		temp = temp->next;
	last = temp->next;
	temp->next = NULL;
	last->next = *stack;
	*stack = last;
	
	
}

/* rrb */

/* rrr */