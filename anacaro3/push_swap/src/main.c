/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:01:07 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/10 14:47:57 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
		exit(1);
	if (checker_wrapper(argc, argv) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	else
	{
		stack_a = arguments_to_list(argc, argv);
		get_index(stack_a);
		stack_b = NULL;
		push_swap(&stack_a, &stack_b);
	}
	return (0);
}
