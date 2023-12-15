/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/10 16:21:40 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Checks if the stack is sorted.
// returns: [0] FALSE / [1] TRUE
int	is_sorted(t_node **head_a)
{
	t_node	*llist_a;
	int		i;

	llist_a = *head_a;
	i = INT_MIN;
	while (llist_a != NULL)
	{
		if (llist_a->data < i)
		{
			return (0);
		}
		else
		{
			i = llist_a->data;
			llist_a = llist_a->next;
		}
	}
	return (1);
}

void	sort_two(t_node **llist_a)
{
	int	size;

	size = stack_size(llist_a);
	if (size == 2 && is_sorted(llist_a))
		exit_free(llist_a);
	else
	{
		sa(llist_a);
		exit_free(llist_a);
	}
}

// if the stack size is 3,you only need make max 2 ops
void	sort_three(t_node **llist_a)
{
	int	max_position;
	int	min_position;

	max_position = node_position(llist_a, max_num(llist_a));
	min_position = node_position(llist_a, min_num(llist_a));
	while (!is_sorted(llist_a))
	{
		if (min_position == 0)
		{
			sa(llist_a);
			ra(llist_a);
		}
		else if (max_position == 0)
		{
			ra(llist_a);
			if (!is_sorted(llist_a))
				sa(llist_a);
		}
		else if (min_position == 2)
			rra(llist_a);
		else
			sa(llist_a);
		break ;
	}
}
