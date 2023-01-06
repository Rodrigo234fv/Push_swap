/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 18:18:50 by rodrigo           #+#    #+#             */
/*   Updated: 2023/01/04 18:23:32 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* This will be the XOR sorting algorithm */

void	ft_swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

int devide(int *stack1, int top, int bottom)
{
	int	bot_value;
	int	top_index;
	int	curr_index;
	
	
}