/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:16:22 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/11 15:34:53 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	j;
	unsigned char	*ptr;

	i = 0;
	j = (unsigned char)c;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == j)
		{
			ptr = ((unsigned char *)(s + i));
			return (ptr);
		}
		i++;
	}
	return (0);
}
