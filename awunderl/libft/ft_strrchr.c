/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:28:07 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/26 17:01:27 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	while (i >= 0)
	{
		if (string[i] == (unsigned char) c)
			return ((char *)(string + i));
		i--;
	}
	return (0);
}
