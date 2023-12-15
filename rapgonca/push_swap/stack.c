/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:35:55 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/17 20:54:02 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_push(t_stack *stack, void *node_data)
{
	t_list	*head;

	head = ft_lstnew(node_data);
	head->next = stack->head;
	stack->head = head;
	stack->size++;
}

void	*stack_pop(t_stack *stack)
{
	t_list	*head;
	void	*node_data;

	if (!stack->head)
		return (NULL);
	head = stack->head;
	node_data = head->node_data;
	stack->head = head->next;
	stack->size--;
	free(head);
	return (node_data);
}

void	stack_shift(t_stack *stack, void *node_data)
{
	t_list	*last;

	last = ft_lstlast(stack->head);
	last->next = ft_lstnew(node_data);
	stack->size++;
}

void	*stack_unshift(t_stack *stack)
{
	t_list	*last;
	t_list	*before;
	void	*node_data;

	if (!stack->head)
		return (NULL);
	last = ft_lstlast(stack->head);
	node_data = last->node_data;
	if (stack->size > 1)
	{
		before = ft_lstat(stack->head, stack->size - 2);
		before->next = NULL;
	}
	stack->size--;
	free(last);
	return (node_data);
}

int	stack_median(t_stack *stack)
{
	t_list	*dup;
	t_list	*temp;
	int		middle;
	int		median;

	dup = ft_lstdup_int(stack->head);
	middle = stack->size / 2;
	ft_lstsort(dup, 0, stack->size - 1);
	temp = dup;
	while (middle--)
		temp = temp->next;
	median = *(int *)temp->node_data;
	ft_lstclear(&dup, free);
	return (median);
}
