/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:55:19 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/03 18:18:09 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;

	s_len = ft_strlen((char *)s);
	if (start >= s_len || s[0] == '\0')
		return (ft_calloc(1, sizeof(char)));
	if (s_len - start < len)
	{
		len = s_len - start + 1;
		ptr = ft_calloc(len, sizeof(char));
	}
	if (s_len - start >= len)
		ptr = ft_calloc((len + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, (s + start), (len + 1));
	return (ptr);
}
