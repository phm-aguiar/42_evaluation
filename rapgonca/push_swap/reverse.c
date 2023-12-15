/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:35:35 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/16 23:36:57 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	void	*content;

	content = stack_pop(stack);
	if (content)
		stack_shift(stack, content);
}

void	ra(t_stack *a, t_stack *b)
{
	(void)b;
	if (a->size > 1)
	{
		ft_putendl_fd("ra", 1);
		rotate(a);
	}
}

void	rb(t_stack *a, t_stack *b)
{
	(void)a;
	if (b->size > 1)
	{
		ft_putendl_fd("rb", 1);
		rotate(b);
	}
}

void	rr(t_stack *a, t_stack *b)
{
	if (a->size > 1 && b->size > 1)
	{
		ft_putendl_fd("rr", 1);
		rotate(a);
		rotate(b);
	}
}
