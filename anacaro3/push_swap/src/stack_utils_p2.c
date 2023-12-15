/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_p2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/10 13:28:09 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Check if there are 3 elements
// returns: [0] false / [1] TRUE
int	size_3_checker(t_node **stack)
{
	int	size;

	size = stack_size(stack);
	if (size == 3)
		return (1);
	else
		return (0);
}

// find MAX number in stack
int	max_num(t_node **stack)
{
	t_node	*temp;
	int		max;

	temp = (*stack);
	max = (*stack)->data;
	{
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
				if (temp->data > max)
				{
					max = temp->data;
				}
			}
			return (max);
		}
	}
}

// find MIN number in stack
int	min_num(t_node **stack)
{
	t_node	*temp;
	int		min;

	temp = (*stack);
	min = (*stack)->data;
	{
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
				if (temp->data < min)
				{
					min = temp->data;
				}
			}
			return (min);
		}
	}
}
