/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:39:44 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/03 17:54:20 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *tofind, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (!*tofind)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while ((big[i + j] == tofind[j]) && ((i + j) < len))
		{
			j++;
			if (tofind[j] == '\0')
				return ((char *)&big[i]);
			else if ((big[i + j] == '\0') || tofind[j] != big[i + j])
				break ;
		}
		i++;
	}
	return (NULL);
}
