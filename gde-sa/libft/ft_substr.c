/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:55:22 by gde-sa            #+#    #+#             */
/*   Updated: 2023/08/17 17:42:37 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (s == 0)
		return (NULL);
	if (len >= len_s)
		len = len_s - start;
	substring = (char *)malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
