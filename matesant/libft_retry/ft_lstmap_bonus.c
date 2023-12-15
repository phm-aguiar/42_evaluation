/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:09:26 by matesant          #+#    #+#             */
/*   Updated: 2023/08/20 11:57:07 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		ft_lstadd_back(&new, ft_lstnew(f(lst->content)));
		(del(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		lst = lst->next;
	}
	return (new);
}
