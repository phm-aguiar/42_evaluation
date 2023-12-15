/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 04:28:55 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/18 15:27:29 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_stack
{
	t_list	*head;
	int		size;
}	t_stack;

void	stack_push(t_stack *stack, void *node_data);
int		is_sorted(t_list *list);
void	sort_small(t_stack *a, t_stack *b);
void	sort_mid(t_stack *a, t_stack *b);
void	sort_big(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	rotate(t_stack *stack);
void	ra(t_stack *a, t_stack *b);
void	rb(t_stack *a, t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	stack_push(t_stack *stack, void *content);
void	*stack_pop(t_stack *stack);
void	stack_shift(t_stack *stack, void *content);
void	*stack_unshift(t_stack *stack);
int		stack_median(t_stack *stack);
void	swap(t_stack *stack);
void	sa(t_stack *a, t_stack *b);
void	sb(t_stack *a, t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	reverse_rotate(t_stack *stack);
void	rra(t_stack *a, t_stack *b);
void	rrb(t_stack *a, t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	print_stack(t_stack	*stack);
void	*get_max(t_list *list);
void	*get_min(t_list *list);

#endif
