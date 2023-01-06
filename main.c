/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:36:54 by rodrigo           #+#    #+#             */
/*   Updated: 2023/01/04 13:13:00 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This is where all functions will be called */


#include "push_swap.h"

int main (int argc, char **argv)
{
	if (argc > 0)
	{
		if (all_checker(argv) == 0)
			printf ("Error\n");
		else
			printf("all good"); // here ill call push_swap
	}
	return (0);
}