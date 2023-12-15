/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:41:52 by msarment          #+#    #+#             */
/*   Updated: 2023/08/02 18:49:42 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	int		full_size;

	full_size = count * size;
	if (size == 0 || count == 0)
		return (malloc(0));
	if ((full_size > __INT_MAX__) || (full_size / count != size))
		return (NULL);
	mem = malloc (full_size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, full_size);
	return (mem);
}
