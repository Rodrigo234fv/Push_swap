/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:03:31 by rodrigo           #+#    #+#             */
/*   Updated: 2023/01/04 13:49:25 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Here I will create an array of ints for the given number
 of argc's */

#include "push_swap.h"

void	create_arr(t_all *all, int argc, char **argv)
{
	int	i;

	i = 0;
	all->size = argc - 1;
	all->array = malloc((all->size + 1) * sizeof(int));
	while(i < all->size)
	{
		all->array[i] = atoi(argv[i + 1]);
		i++;
	}
}

/* This is just a tester */

/* int main(int argc, char **argv)
{
	t_all all;
	create_arr(&all, argc, argv);
	for (int i = 0; i < all.size; i++)
	{
		printf("%d", all.array[i]);
	}

	printf("\n");
	free(all.array);
} */
