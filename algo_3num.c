/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:33:25 by rode-alb          #+#    #+#             */
/*   Updated: 2023/01/06 18:13:54 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_all *all)
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

int	get_max(t_all *all)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < all->size)
	{
		if (all->array[i] > all->array[j])
			j = i;
		i++;
	}
	return (j);
}

void	algo3(t_all *all)
{
	int	max;
	int	min;

	max = get_max(&all);
	min = get_min(&all);

	if (max == 2 && min == 1)
	{
		sa(all);
		
	}

	// conditions
}