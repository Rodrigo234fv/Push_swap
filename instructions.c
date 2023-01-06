/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:35:36 by rodrigo           #+#    #+#             */
/*   Updated: 2023/01/04 16:16:18 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Here I am using the XOR swap algo. This algo is perfect 
 for our push_swap, since we wont get the same number twice */

void	sa(t_all *all)
{
	if (all->size >= 2)
	{
		all->array[0] ^= all->array[1];
		all->array[1] ^= all->array[0];
		all->array[0] ^= all->array[1];
	}
}


int main(int argc, char** argv)
{
	t_all all;
	create_arr(&all, argc, argv);
	for (int i = 0; i < all.size; i++)
	{
		printf("%d", all.array[i]);
	}
	printf("\n");
	
	sa(&all);
	
	for (int i = 0; i < all.size; i++)
	{
		printf("%d", all.array[i]);
	}
	printf("\n");
}