/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_p1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/10 13:30:58 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Checks the number of elements in a given stack
int	stack_size(t_node **stack)
{
	int		i;
	t_node	*temp;

	i = 1;
	temp = (*stack);
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

// Finds the position (index) of a given node in a stack
//(node is int because == node->data)
int	node_position(t_node **stack, int node)
{
	int		i;
	t_node	*temp;

	i = 0;
	temp = (*stack);
	while (temp != NULL)
	{
		if (temp->data == node)
			return (i);
		else
		{
			temp = temp->next;
			i++;
		}
	}
	return (-1);
}

int	find_node(t_node **stack, int node)
{
	t_node	*temp;

	temp = (*stack);
	while (temp != NULL)
	{
		if (temp->data != node)
			return (temp->data);
		else
		{
			temp = temp->next;
		}
		return (temp->data);
	}
	return (-1);
}

// adds index to struct - radix needs to treat negative numbers
void	get_index(t_node *stack)
{
	t_node	*start_stack;
	t_node	*temp;

	start_stack = stack;
	while (stack)
	{
		stack->index = 0;
		temp = start_stack;
		while (temp)
		{
			if (stack->data > temp->data)
				(stack->index)++;
			temp = temp->next;
		}
		stack = stack->next;
	}
}

// finds last node
int	last_node(t_node **stack)
{
	t_node	*temp;

	temp = (*stack);
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	return (temp->data);
}
