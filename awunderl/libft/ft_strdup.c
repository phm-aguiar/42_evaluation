/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:25:05 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/11 15:37:21 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*dst;
	unsigned int	i;

	i = ft_strlen(s);
	dst = (char *)ft_calloc((i + 1), 1);
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, s, i);
	return (dst);
}
