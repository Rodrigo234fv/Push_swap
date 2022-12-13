/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:36:54 by rodrigo           #+#    #+#             */
/*   Updated: 2022/12/13 17:59:08 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		if (check_if_int(argv) == 0)
			printf ("Error\n");
		else
			printf("all good"); // here ill call push_swap
	}
	return (0);
}