/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:37:31 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/26 16:58:00 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*s1;

	j = 0;
	i = ft_strlen((char *)s);
	s1 = (char *) malloc(i + 1);
	if (!s1)
		return (NULL);
	while (s[j])
	{
		s1[j] = f(j, s[j]);
		j++;
	}
	s1[j] = '\0';
	return (s1);
}
