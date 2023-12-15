/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:35:24 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/16 23:36:59 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack *stack)
{
	void	*content;

	content = stack_unshift(stack);
	if (content)
		stack_push(stack, content);
}

void	rra(t_stack *a, t_stack *b)
{
	(void)b;
	if (a->size > 1)
	{
		ft_putendl_fd("rra", 1);
		reverse_rotate(a);
	}
}

void	rrb(t_stack *a, t_stack *b)
{
	(void)a;
	if (b->size > 1)
	{
		ft_putendl_fd("rrb", 1);
		reverse_rotate(b);
	}
}

void	rrr(t_stack *a, t_stack *b)
{
	if (a->size > 1 && b->size > 1)
	{
		ft_putendl_fd("rrr", 1);
		reverse_rotate(a);
		reverse_rotate(b);
	}
}
