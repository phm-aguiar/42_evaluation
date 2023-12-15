/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:43:28 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/11 15:36:14 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && *(big + i))
	{
		j = 0;
		while ((*(big + i + j) == *(little + j)) && (i + j) < len)
		{
			j++;
			if (*(little + j) == '\0')
				return ((char *)(big + i));
			else if (*(little + j) != *(big + i + j) || *(big + i + j) == '\0')
				break ;
		}
		i++;
	}
	return (0);
}
