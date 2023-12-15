/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:56:35 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/10 13:31:31 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

// checks if arg is nothing other than INT
// returns: [0] false / [1] TRUE
int	non_int_checker(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '+' || argv[i][j] == '-')
			j++;
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) == 1)
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

// checks if numbers are between MAX AND MIN (range)
// returns: [0] false / [1] TRUE
int	max_min_int_checker(int argc, char **argv)
{
	int		i;
	long	current;

	i = 1;
	while (i < argc)
	{
		current = ft_atol(argv[i]);
		if (current < INT_MIN || current > INT_MAX)
			return (0);
		else
			i++;
	}
	return (1);
}

// checks for unique args
// returns: [0] false / [1] TRUE
int	dups_checker(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			{
				return (0);
			}
		}
	}
	return (1);
}

// if any checker function returns 0 means some arg is invalid;
int	checker_wrapper(int argc, char **argv)
{
	int	dups;
	int	non_int;
	int	max_min;

	dups = dups_checker(argc, argv);
	non_int = non_int_checker(argc, argv);
	max_min = max_min_int_checker(argc, argv);
	if (dups == 1 && non_int == 1 && max_min == 1)
		return (1);
	else
		return (0);
}
