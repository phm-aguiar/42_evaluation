/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:36:16 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/17 03:29:12 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *list)
{
	if (!list)
		return (0);
	while (list->next)
	{
		if (*(int *)list->node_data > *(int *)list->next->node_data)
			return (0);
		list = list->next;
	}
	return (1);
}

void	print_stack(t_stack	*stack)
{
	t_list	*temp;

	if (!stack)
		return ;
	temp = stack->head;
	while (temp)
	{
		ft_printf("|%d|\n", *(int *)temp->node_data);
		temp = temp->next;
	}
}

void	*get_max(t_list *list)
{
	void	*max;

	if (!list)
		return (NULL);
	max = list->node_data;
	while (list)
	{
		if (*(int *)list->node_data > *(int *)max)
			max = list->node_data;
		list = list->next;
	}
	return (max);
}

void	*get_min(t_list *list)
{
	void	*min;

	if (!list)
		return (NULL);
	min = list->node_data;
	while (list)
	{
		if (*(int *)list->node_data < *(int *)min)
			min = list->node_data;
		list = list->next;
	}
	return (min);
}
