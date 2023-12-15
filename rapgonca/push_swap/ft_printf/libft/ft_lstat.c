/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:50:48 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/17 00:50:49 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstat(t_list *list, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i++ < n)
	{
		if (!list)
			break ;
		list = list->next;
	}
	return (list);
}
