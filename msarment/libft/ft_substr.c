/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:35:11 by msarment          #+#    #+#             */
/*   Updated: 2023/08/16 18:25:56 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	strlen;
	size_t	size;
	size_t	i;

	strlen = ft_strlen(s);
	if (start >= strlen)
		size = 0;
	else if (len >= strlen)
		size = (strlen - start);
	else if (strlen - start <= len)
		size = (strlen - start);
	else
		size = len;
	sub = malloc(size + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (((i + start) < strlen) && (i < len))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
