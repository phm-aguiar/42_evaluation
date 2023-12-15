/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:09:16 by matesant          #+#    #+#             */
/*   Updated: 2023/08/04 19:46:04 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elem, size_t n)
{
	void	*memoalloc;

	memoalloc = (void *) malloc(elem * n);
	if (memoalloc == NULL)
		return (NULL);
	ft_bzero(memoalloc, elem * n);
	return (memoalloc);
}
