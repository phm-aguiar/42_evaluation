/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:53:44 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/12 17:30:25 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_fewer_moves(t_moves *moves)
{
	while (moves->ra_moves > 0 && moves->rb_moves > 0)
	{
		moves->ra_moves--;
		moves->rb_moves--;
		moves->rr_moves++;
	}
	while (moves->rra_moves > 0 && moves->rrb_moves > 0)
	{
		moves->rra_moves--;
		moves->rrb_moves--;
		moves->rrr_moves++;
	}
}

static void	ft_do_moves(t_stack *stack_a, t_stack *stack_b, t_moves *moves)
{
	ft_fewer_moves(moves);
	while (moves->ra_moves-- > 0)
		ft_rotate_a(stack_a, 1);
	while (moves->rb_moves-- > 0)
		ft_rotate_b(stack_b, 1);
	while (moves->rr_moves-- > 0)
		ft_rotate_ab(stack_a, stack_b, 1);
	while (moves->rra_moves-- > 0)
		ft_reverse_rotate_a(stack_a, 1);
	while (moves->rrb_moves-- > 0)
		ft_reverse_rotate_b(stack_b, 1);
	while (moves->rrr_moves-- > 0)
		ft_reverse_rotate_ab(stack_a, stack_b, 1);
}

static void	ft_put_in_order(t_stack *stack_a)
{
	int	count_ra;
	int	count_rra;

	count_ra = ft_count_moves_r(stack_a, stack_a->i_min);
	count_rra = ft_count_moves_rr(stack_a, stack_a->i_min);
	if (count_ra < count_rra)
		while (stack_a->start->index != stack_a->i_min)
			ft_rotate_a(stack_a, 1);
	else
	{
		while (stack_a->start->index != stack_a->i_min)
			ft_rotate_a(stack_a, 1);
	}
}

static void	ft_push_back(t_stack *stack_a, t_stack *stack_b)
{
	if (ft_count_moves_r(stack_b, stack_b->i_max)
		< ft_count_moves_rr(stack_b, stack_b->i_max))
		while (stack_b->start->index != stack_b->i_max)
			ft_rotate_b(stack_b, 1);
	else
		while (stack_b->start->index != stack_b->i_max)
			ft_reverse_rotate_b(stack_b, 1);
	while (stack_b->size > 0)
		ft_push_a(stack_a, stack_b);
	ft_put_in_order(stack_a);
}

void	ft_sort_500(t_stack *stack_a, t_stack *stack_b, t_moves *moves)
{
	t_node	*current;
	int		count;

	ft_push_b(stack_b, stack_a);
	ft_push_b(stack_b, stack_a);
	if (stack_b->start->value < stack_b->start->next->value)
		ft_swap_b(stack_b);
	while (stack_a->size > 0)
	{
		current = stack_a->start;
		ft_init_s_moves(moves);
		count = 0;
		while (count < stack_a->size)
		{
			ft_search_min_moves(current->index, stack_a, stack_b, moves);
			current = current->next;
			count++;
		}
		ft_do_moves(stack_a, stack_b, moves);
		ft_push_b(stack_b, stack_a);
	}
	ft_push_back(stack_a, stack_b);
}
