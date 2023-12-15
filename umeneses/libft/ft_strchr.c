/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:20:07 by bira              #+#    #+#             */
/*   Updated: 2023/09/03 18:06:15 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	size_t	index;

	index = 0;
	while (string[index] != '\0')
	{
		if (string[index] == (unsigned char)c)
			return ((char *)string + index);
		index++;
	}
	return (NULL);
}
