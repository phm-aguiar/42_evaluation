/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:34:43 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/17 21:20:07 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

int	check_entries(char *argv)
{
	int	i;

	i = 0;
	if (argv[0] == '-')
		i++;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	duplicate(void *node_data, void *data)
{
	return (*(int *)node_data == *(int *)data);
}

static int	check_stack(int argc, char **argv, t_stack *stack)
{
	long int	temp;
	int			*node_data;

	while (argc)
	{
		if (!check_entries(argv[argc - 1]))
		{
			free(node_data);
			ft_error();
		}
		temp = ft_atoil(argv[argc-- - 1]);
		if (temp > MAX_INT || temp < MIN_INT)
			ft_error();
		node_data = (int *) malloc(sizeof(*node_data));
		if (!node_data)
			return (0);
		*node_data = (int)temp;
		if (stack->head && ft_lstfind(stack->head, node_data, duplicate))
			ft_error();
		stack_push(stack, node_data);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	a = (t_stack){NULL, 0};
	b = (t_stack){NULL, 0};
	if (argc <= 1)
		return (0);
	check_stack(argc - 1, &argv[1], &a);
	if (!is_sorted(a.head))
	{
		if (a.size == 2)
			sa(&a, &b);
		else if (a.size < 4)
			sort_small(&a, &b);
		else if (a.size < 6)
			sort_mid(&a, &b);
		else
			sort_big(&a, &b);
	}
	ft_lstclear(&a.head, free);
	return (0);
}
