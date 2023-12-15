/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:06:01 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/03 18:10:15 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;

	ptr = (char *)ft_calloc((ft_strlen(src) + 1), sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, src, ft_strlen(src));
	ptr[ft_strlen(src)] = '\0';
	return (ptr);
}
