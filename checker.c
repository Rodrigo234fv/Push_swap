/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-alb <rode-alb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:46:13 by rodrigo           #+#    #+#             */
/*   Updated: 2023/01/06 14:19:46 by rode-alb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_int(char **argv)
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

int	check_double(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (argv[j] && j < i)
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

int	arg_zero(char **argv)
{
	int	i;

	i = 1;
	if (!argv[i])
		return (0);
	else
		return (1);
}

int	all_checker(char **argv)
{
	if (arg_zero(argv) == 0 || check_double(argv) == 0 || check_int(argv) == 0)
		return (0);
	else
		return (1);
}

/* int main (int argc, char **argv)
{
	if (all_checker(argv) == 0)
		return (0);
	else 
		printf ("All conditions met success!");
} */