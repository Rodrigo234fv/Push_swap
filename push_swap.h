/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:33:54 by rodrigo           #+#    #+#             */
/*   Updated: 2022/12/13 19:08:07 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

/* Chekers */

static int	check_if_int (char **argv);
static int	check_if_double (char **argv);

int			ft_compare_nums(const char *s1, const char *s2);

/* Utils */

int	ft_strncmp(const char *s1, const char *s2);
int	ft_atoi(const char *str);



#endif