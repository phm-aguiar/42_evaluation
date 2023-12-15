/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacaro3 <anacaro3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:29:39 by anacaro3          #+#    #+#             */
/*   Updated: 2023/09/10 16:22:24 by anacaro3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define INT_MIN -2147483648
# define INT_MAX 2147483647

# include "libs/libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
	int				index;
}					t_node;

t_node				*create_node(int data, t_node *next);
t_node				*arguments_to_list(int argc, char **argv);
void				insert_tail(t_node *head, t_node *new_last_node);
void				get_index(t_node *stack);
int					dups_checker(int argc, char **argv);
int					non_int_checker(int argc, char **argv);
int					max_min_int_checker(int argc, char **argv);
char				**check_and_parse_argv(char **argv);
int					checker_wrapper(int argc, char **argv);
void				swap_aux(t_node **head);
void				sa(t_node **head_a);
void				sb(t_node **head_b);
void				ss(t_node **head_a, t_node **head_b);
void				push_a(t_node **head_a, t_node **head_b);
void				push_b(t_node **head_a, t_node **head_b);
void				pa(t_node **head_a, t_node **head_b);
void				pb(t_node **head_a, t_node **head_b);
void				rotate_a(t_node **head_a);
void				rotate_b(t_node **head_b);
void				ra(t_node **head_a);
void				rb(t_node **head_b);
void				rr(t_node **head_a, t_node **head_b);
void				rev_rotate_a(t_node **head_a);
void				rev_rotate_b(t_node **head_b);
void				rra(t_node **head_a);
void				rrb(t_node **head_b);
void				rrr(t_node **head_a, t_node **head_b);
void				push_swap(t_node **head_a, t_node **head_b);
int					stack_size(t_node **stack);
int					node_position(t_node **stack, int node);
int					last_node(t_node **stack);
void				sort_two(t_node **llist_a);
int					size_3_checker(t_node **stack);
int					position_list(t_node **llist);
void				moves_five(t_node **llist_a, t_node **llist_b, int i);
void				moves_four(t_node **llist_a, t_node **llist_b, int i);
void				sort_five(t_node **llist_a, t_node **llist_b);
void				sort_four(t_node **llist_a, t_node **llist_b);
int					max_num(t_node **stack);
int					min_num(t_node **stack);
int					is_sorted(t_node **head);
void				sort_three(t_node **stack);
int					get_max_bit(t_node *stack);
void				sort_radix(t_node **stack_a, t_node **stack_b, int i);
void				radix(t_node **stack_a, t_node **stack_b);
void				free_stack(t_node **stack);
void				exit_free(t_node **stack);

#endif