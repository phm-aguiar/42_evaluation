/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:44:33 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/17 03:14:23 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup_int(t_list *list)
{
	t_list	*new;
	t_list	*temp;
	int		*node_data;

	new = 0;
	while (list)
	{
		node_data = (int *)malloc(sizeof(*node_data));
		if (!node_data)
			return (0);
		*node_data = *(int *)list->node_data;
		temp = ft_lstnew(node_data);
		if (!temp)
			return (0);
		ft_lstadd_back(&new, temp);
		list = list->next;
	}
	return (new);
}
