/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:36:07 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/16 23:36:47 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	void	*first;
	void	*second;

	if (stack->size < 2)
		return ;
	first = stack_pop(stack);
	second = stack_pop(stack);
	stack_push(stack, first);
	stack_push(stack, second);
}

void	sa(t_stack *a, t_stack *b)
{
	(void)b;
	if (a->size > 1)
	{
		ft_putendl_fd("sa", 1);
		swap(a);
	}
}

void	sb(t_stack *a, t_stack *b)
{
	(void)a;
	if (b->size > 1)
	{
		ft_putendl_fd("sb", 1);
		swap(b);
	}
}

void	ss(t_stack *a, t_stack *b)
{
	if (a->size > 1 && b->size > 1)
	{
		ft_putendl_fd("ss", 1);
		swap(a);
		swap(b);
	}
}
