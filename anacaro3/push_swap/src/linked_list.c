/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:41:02 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/10 00:06:59 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// TODO: remember to free after using it
// creates (already allocating memory for) a node
t_node	*create_node(int data, t_node *next)
{
	t_node	*node;

	node = calloc(1, sizeof(t_node));
	node->data = data;
	node->next = next;
	return (node);
}

// inserts a node(new_last_node) at the end of a list(head)
void	insert_tail(t_node *head, t_node *new_last_node)
{
	t_node	*temp;

	if (head->next == NULL)
	{
		head->next = new_last_node;
	}
	else
	{
		temp = head->next;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_last_node;
	}
}

// creates a llist from arguments
t_node	*arguments_to_list(int argc, char **argv)
{
	int		i;
	t_node	*head;
	t_node	*new_node;

	head = create_node(atoi(argv[1]), NULL);
	i = 2;
	while (i != argc)
	{
		new_node = create_node(atoi(argv[i]), NULL);
		insert_tail(head, new_node);
		i++;
	}
	return (head);
}

// This function frees the stack.
void	free_stack(t_node **stack)
{
	t_node	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		(*stack)->data = 0;
		free(*stack);
		*stack = tmp;
	}
}

// free and exit program
void	exit_free(t_node **stack)
{
	free_stack(stack);
	exit(1);
}
