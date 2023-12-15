/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:00:40 by msarment          #+#    #+#             */
/*   Updated: 2023/07/25 19:13:26 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size > 0)
	{
		while (src[count] != '\0' && count < size - 1)
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	while (src[count])
		count++;
	return (count);
}
