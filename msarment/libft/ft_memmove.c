/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:53:22 by msarment          #+#    #+#             */
/*   Updated: 2023/08/09 17:33:17 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_src;
	char	*c_dst;

	if (!dst && !src)
		return (NULL);
	c_src = (char *) src;
	c_dst = (char *) dst;
	if (c_src < c_dst && (c_src + len) > c_dst)
	{
		while (len > 0)
		{
			c_dst[len - 1] = c_src[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
