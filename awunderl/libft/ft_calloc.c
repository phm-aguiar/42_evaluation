/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:58:58 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/28 15:36:50 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	check;

	if (!n || !size)
		return (malloc(0));
	check = n * size;
	if ((check / n) != size)
		return (NULL);
	ptr = (void *) malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}
