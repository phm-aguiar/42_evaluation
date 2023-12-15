/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:43:52 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/17 03:15:24 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	swap(t_list *a, t_list *b)
{
	void	*tmp;

	tmp = a->node_data;
	a->node_data = b->node_data;
	b->node_data = tmp;
}

static int	partition(t_list *list, int start, int end)
{
	int		i;
	t_list	*pivot;
	t_list	*current;
	int		pivot_index;

	i = start;
	pivot_index = start;
	pivot = ft_lstat(list, end);
	while (i < end)
	{
		current = ft_lstat(list, i);
		if (*(int *)current->node_data < *(int *)pivot->node_data)
		{
			swap(current, ft_lstat(list, pivot_index));
			pivot_index++;
		}
		i++;
	}
	swap(ft_lstat(list, pivot_index), pivot);
	return (pivot_index);
}

void	ft_lstsort(t_list *list, int start, int end)
{
	int	index;

	if (start >= end)
		return ;
	index = partition(list, start, end);
	ft_lstsort(list, start, index - 1);
	ft_lstsort(list, index + 1, end);
}
