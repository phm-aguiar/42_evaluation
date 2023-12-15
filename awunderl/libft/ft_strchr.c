/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:31:08 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/26 17:00:58 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	f;

	f = (unsigned char)c;
	while (*s)
	{
		if (*s == f)
			return ((char *)s);
		else
			s++;
	}
	if (*s == f)
		return ((char *)s);
	return (0);
}
