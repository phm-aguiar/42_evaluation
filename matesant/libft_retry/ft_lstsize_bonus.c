/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:59:21 by matesant          #+#    #+#             */
/*   Updated: 2023/08/20 12:03:17 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	items;

	if (lst == NULL)
		return (0);
	items = 1;
	while (lst->next != NULL)
	{
		items++;
		lst = lst->next;
	}
	return (items);
}

