/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:17:30 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/11 15:37:54 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	k;
	char	*dst;

	j = 0;
	k = (ft_strlen(s));
	if (start >= k)
		return (ft_strdup(""));
	if ((k - start) < len)
		len = k - start;
	dst = (char *) malloc(len + 1);
	if (!dst)
		return (NULL);
	while (s[j + start] && j < len)
	{
		dst[j] = s[j + start];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
