/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:07:07 by rodrigo           #+#    #+#             */
/*   Updated: 2023/02/03 18:41:58 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Stack A */

t_node	*create_list(int size, int *args)
{
	t_node	*head;
	t_node	*current;
	t_node	*new_node;
	int	i;
	
	head = NULL;
	current = NULL;
	new_node = NULL;
	i = 0;

	while (i < size)
	{
		new_node = (t_node*) malloc(sizeof(t_node));
		new_node->data = args[i];
		new_node->next = NULL;

		if (head == NULL)
			head = new_node;
		else
			current->next = new_node;
		current = new_node;
		i++;
	}
	return (head);
}

/* Now I am able to create Lists */

/* This function is only here to help me visualize things. Its not needed. */

void print_list(t_node *stack)
{
	t_node *current;

	current = stack;
	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}

/* Getting the List size to choose which algo I will use*/

int	list_size(t_node *stack)
{
	t_node	*temp;
	int	size;

	temp = stack;
	size = 0;
	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}


int main (int argc, char **argv)
{
	int *args = malloc(sizeof(int) * (argc - 1));
	for (int i = 1; i < argc; i++)
	{
		args[i - 1] = atoi(argv[i]);
	}
	t_node *stack_a = create_list(argc - 1, args);
	t_node *stack_b = create_list(0, NULL);


	/* Algo goes here */
	/* Pseudo Code  */

	/* if list_size == 3 --> small algo
		if else list_size == 5 --> medium algo
		else --> large algo
	 */
	//sa(stack_a);
	//pb(&stack_a, &stack_b);
	//pa(&stack_a, &stack_b);
	//rra(&stack_a);
	

	printf("List A:\n");
	print_list(stack_a);
	printf("List B:\n");
	print_list(stack_b);

	// small_algo2(&stack_a, &stack_b);

	stop_when_empty(&stack_a, &stack_b);

	printf("List A: \n");
	print_list(stack_a);
	printf("List B: \n");
	print_list(stack_b);
	

	free(args);
	return (0);
}
