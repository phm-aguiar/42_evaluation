/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:29:15 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/07 20:15:23 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate_a(t_node **head_a)
{
	t_node	**llist_a;
	t_node	*initial_tail;
	t_node	*initial_head;
	t_node	*temp;

	llist_a = head_a;
	if (llist_a != NULL && (*llist_a)->next != NULL)
	{
		initial_head = (*llist_a);
		temp = (*llist_a);
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		initial_tail = temp->next;
		*llist_a = initial_tail;
		initial_tail->next = initial_head;
		temp->next = NULL;
	}
	head_a = llist_a;
}

void	rev_rotate_b(t_node **head_b)
{
	t_node	**llist_b;
	t_node	*initial_tail;
	t_node	*initial_head;
	t_node	*temp;

	llist_b = head_b;
	if (llist_b != NULL && (*llist_b)->next != NULL)
	{
		initial_head = (*llist_b);
		temp = (*llist_b);
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		initial_tail = temp->next;
		*llist_b = initial_tail;
		initial_tail->next = initial_head;
		temp->next = NULL;
	}
	head_b = llist_b;
}

//**rra (reverse rotate a): Shift down all elements of stack a by 1.**
void	rra(t_node **head_a)
{
	rev_rotate_a(head_a);
	ft_putstr_fd("rra\n", 1);
}

//**rrb (reverse rotate b): Shift down all elements of stack b by 1.**
void	rrb(t_node **head_b)
{
	rev_rotate_b(head_b);
	ft_putstr_fd("rrb\n", 1);
}

//**rrr : rra and rrb at the same time.**
void	rrr(t_node **head_a, t_node **head_b)
{
	rev_rotate_a(head_a);
	rev_rotate_b(head_b);
	ft_putstr_fd("rrr\n", 1);
}
