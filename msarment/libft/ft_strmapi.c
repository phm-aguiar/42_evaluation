/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:18:32 by msarment          #+#    #+#             */
/*   Updated: 2023/08/10 16:59:38 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	i = 0;
	newstr = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!newstr)
		return (NULL);
	while (s[i])
	{
		newstr[i] = (f)(i, s[i]);
		i++;
	}
	return (newstr);
}
