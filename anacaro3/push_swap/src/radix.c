/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:40:26 by carolina.si       #+#    #+#             */
/*   Updated: 2023/09/10 13:30:05 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max_bit(t_node *stack)
{
	int	max_index;
	int	max_bit;

	max_index = stack->index;
	stack = stack->next;
	while (stack)
	{
		if (stack->index > max_index)
			max_index = stack->index;
		stack = stack->next;
	}
	max_bit = 0;
	while ((max_index | 0) != 0)
	{
		max_bit++;
		max_index = max_index >> 1;
	}
	return (max_bit);
}

void	sort_radix(t_node **stack_a, t_node **stack_b, int i)
{
	int	size;

	size = stack_size(stack_a);
	while (size > 0)
	{
		if (((*stack_a)->index >> i & 1) == 0)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		size--;
	}
	while (*stack_b)
		pa(stack_a, stack_b);
}

void	radix(t_node **stack_a, t_node **stack_b)
{
	int	i;
	int	max_bit;

	i = 0;
	max_bit = get_max_bit(*stack_a);
	while (i < max_bit && !is_sorted(stack_a))
	{
		sort_radix(stack_a, stack_b, i);
		i++;
	}
}
