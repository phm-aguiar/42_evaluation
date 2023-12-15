/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:39:57 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/11 15:30:31 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = 0;
	if (n > 0)
	{
		while (n > i)
		{
			*(unsigned char *)((char *)str + i) = uc;
			i++;
		}
	}
	return (str);
}
