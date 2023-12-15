/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:34:00 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/16 23:37:03 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	if (b->size)
	{
		ft_putendl_fd("pa", 1);
		stack_push(a, stack_pop(b));
	}
}

void	pb(t_stack *a, t_stack *b)
{
	if (a->size)
	{
		ft_putendl_fd("pb", 1);
		stack_push(b, stack_pop(a));
	}
}
