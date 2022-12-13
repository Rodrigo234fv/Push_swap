/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:46:13 by rodrigo           #+#    #+#             */
/*   Updated: 2022/12/13 19:06:55 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int check_if_int (char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][0] == '+' || argv[i][0] == '-') && argv[i][j + 1] != 0)
				j++;
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

static int check_if_double (char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (argv[j])
		{
			if (j != 1 && ft_compare_nums(argv[i], argv[j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/* Basiclaly this is a strcmp but with the + checker */

int	ft_compare_nums(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = i;
	if (s1[i] == '+')
	{
		if (s2[j] != '+')
			i++;
	}
	else
	{
		if (s2[j] == '+')
			j++;
	}
	while (s1[i] && s2[i] && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);

}

int arg_is_zero (char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

int main (int argc, char **argv)
{
	if (arg_is_zero(argv) == 0)
		printf("Error");
	return (0);
	
}

/* 
int checker_all (char **argv)
{
	
} */