/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:47:50 by rode-alb          #+#    #+#             */
/*   Updated: 2023/01/06 17:49:51 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* I will do 3 algos so this */



/* This func gets the position of the smallest number in stack A

This works because, we identify the smallest number in stack A and
 then we ra or rra... pb to push it to stack be and we rinse and repeat */

int	get_index(t_all *all)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (all->array[i] != 0)
	{
		if (all->array[i] < all->array[j])
		{
			j = i;
		}
		i++;
	}
	return (j);
}





int	main(int argc, char **argv)
{
	t_all	all;

	create_arr(&all, argc, argv);
	printf("%d", get_index(&all));

}
