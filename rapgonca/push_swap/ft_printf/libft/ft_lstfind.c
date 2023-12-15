/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:14:47 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/17 03:13:49 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfind(t_list *list, void *data, int (*cmp)())
{
	t_list	*found;

	found = NULL;
	while (list && !found)
	{
		if (cmp(list->node_data, data))
		{
			found = list;
		}
		list = list->next;
	}
	return (found);
}
