/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:35:36 by rodrigo           #+#    #+#             */
/*   Updated: 2023/01/06 18:06:39 by rode-alb         ###   ########.fr       */
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

/* void	sa(t_all *all)
{
	ss(all, "sa");
}
void	sb(t_all *all)
{
	ss(a, null);
	ss(b, null);
	
}

void	ss(t_all *all)
{
	ss(all, "sb");
} */


void	ra(t_all *all)
{
	int	i;
	int	temp;

	temp = all->array[0];
	i = 0;
	while (i < all->size)
	{
		all->array[i] = all->array[i + 1];
		i++;
	}
	all->array[all->size - 1] = temp;
}

void	rra(t_all *all)
{
	int	i;
	int	temp;

	temp = all->array[all->size - 1];
	i = all->size - 1;
	while (i > 0)
	{
		all->array[i] = all->array[i - 1];
		i--;
	}
	all->array[0] = temp;
}




/* int	main(int argc, char **argv)
{
	t_all	all;

	create_arr(&all, argc, argv);
	for (int i = 0; i < all.size; i++)
	{
		printf("%d ", all.array[i]);
	}
	printf("\n");
	rra(&all);
	for (int i = 0; i < all.size; i++)
	{
		printf("%d ", all.array[i]);
	}
	printf("\n");
}
 */