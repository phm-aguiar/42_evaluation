/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:35:45 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/17 03:56:37 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small(t_stack *a, t_stack *b)
{
	int	min;
	int	max;

	min = *(int *)get_min(a->head);
	max = *(int *)get_max(a->head);
	while (!is_sorted(a->head))
	{
		if (*(int *)a->head->node_data == max
			&& *(int *)a->head->next->node_data == min)
			ra(a, b);
		else if (*(int *)a->head->node_data > *(int *)a->head->next->node_data)
			sa(a, b);
		else
			rra(a, b);
	}
}

static void	part_mid(t_stack *a, t_stack *b)
{
	int	median;
	int	middle;

	median = stack_median(a);
	middle = a->size / 2;
	while (middle)
	{
		if (*(int *)a->head->node_data < median)
		{
			middle--;
			pb(a, b);
		}
		else
			ra(a, b);
	}
}

void	sort_mid(t_stack *a, t_stack *b)
{
	part_mid(a, b);
	sort_small(a, b);
	if (is_sorted(b->head))
		sb(a, b);
	while (b->size)
		pa(a, b);
}

static void	index_stack(t_stack *stack)
{
	int		i;
	t_list	*list;
	t_list	*sorted;
	t_list	*temp_sorted;

	sorted = ft_lstdup_int(stack->head);
	ft_lstsort(sorted, 0, stack->size - 1);
	list = stack->head;
	while (list)
	{
		temp_sorted = sorted;
		i = 0;
		while (i < stack->size)
		{
			if (*(int *)list->node_data == *(int *)temp_sorted->node_data)
			{
				*(int *)list->node_data = i;
				break ;
			}
			temp_sorted = temp_sorted->next;
			i++;
		}
		list = list->next;
	}
	ft_lstclear(&sorted, free);
}

void	sort_big(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	num;
	int	size;

	index_stack(a);
	size = a->size;
	i = 0;
	while (!is_sorted(a->head))
	{
		j = 0;
		while (j < size)
		{
			num = *(int *)a->head->node_data;
			if ((num >> i) & 1)
				ra(a, b);
			else
				pb(a, b);
			j++;
		}
		while (b->size)
			pa(a, b);
		i++;
	}
}
