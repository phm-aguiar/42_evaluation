/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:02:57 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/17 03:12:51 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *node_data)
{
	t_list	*node;

	node = (t_list *) malloc (sizeof(t_list));
	if (!node)
		return (NULL);
	node->node_data = node_data;
	node->next = NULL;
	return (node);
}
