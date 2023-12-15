/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:10:47 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/11 15:32:47 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	l = (ft_strlen(dst));
	k = (ft_strlen(src));
	if (size <= l)
		return (k + size);
	i = 0;
	while (*(dst + i) != '\0' && i < (size))
	{
		i++;
	}
	j = 0;
	while (*(src + j) != '\0' && i < (size - 1))
	{
		*(dst + i) = *(src + j);
		j++;
		i++;
	}
	*(dst + i) = '\0';
	return (k + l);
}
