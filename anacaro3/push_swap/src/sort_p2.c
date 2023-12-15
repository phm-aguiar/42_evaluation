/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_p2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:04:11 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/10 16:19:19 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	position_list(t_node **llist)
{
	t_node	*aux;
	t_node	*aux_max;
	int		i;

	i = 0;
	aux = (*llist)->next;
	aux_max = *llist;
	while (aux)
	{
		if (aux_max->data < aux->data)
			aux_max = aux;
		aux = aux->next;
	}
	aux = *llist;
	while (aux)
	{
		if (aux->data == aux_max->data)
			break ;
		i++;
		aux = aux->next;
	}
	return (i);
}

void	moves_five(t_node **llist_a, t_node **llist_b, int i)
{
	if (i == 0)
		pb(llist_a, llist_b);
	else if (i == 1)
	{
		sa(llist_a);
		pb(llist_a, llist_b);
	}
	else if (i == 2)
	{
		ra(llist_a);
		ra(llist_a);
		pb(llist_a, llist_b);
	}
	else if (i == 3)
	{
		rra(llist_a);
		rra(llist_a);
		pb(llist_a, llist_b);
	}
	else if (i == 4)
	{
		rra(llist_a);
		pb(llist_a, llist_b);
	}
}

void	moves_four(t_node **llist_a, t_node **llist_b, int i)
{
	if (i == 0)
		pb(llist_a, llist_b);
	else if (i == 1)
	{
		sa(llist_a);
		pb(llist_a, llist_b);
	}
	else if (i == 2)
	{
		rra(llist_a);
		rra(llist_a);
		pb(llist_a, llist_b);
	}
	else if (i == 3)
	{
		rra(llist_a);
		pb(llist_a, llist_b);
	}
}

void	sort_five(t_node **llist_a, t_node **llist_b)
{
	moves_five(llist_a, llist_b, position_list(llist_a));
	moves_four(llist_a, llist_b, position_list(llist_a));
	sort_three(llist_a);
	if ((*llist_b)->data > (*llist_b)->next->data)
		sb(llist_b);
	pa(llist_a, llist_b);
	ra(llist_a);
	pa(llist_a, llist_b);
	ra(llist_a);
}

void	sort_four(t_node **llist_a, t_node **llist_b)
{
	moves_four(llist_a, llist_b, position_list(llist_a));
	sort_three(llist_a);
	pa(llist_a, llist_b);
	ra(llist_a);
}
