/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:42:46 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/23 19:29:32 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;
	int		k;
	int		l;

	k = 0;
	l = 0;
	i = ft_strlen((char *)s1);
	j = ft_strlen((char *)s2);
	s3 = (char *) malloc(i + j + 1);
	if (!s3)
		return (NULL);
	while (s1[k])
		s3[l++] = s1[k++];
	k = 0;
	while (s2[k])
		s3[l++] = s2[k++];
	s3[l] = '\0';
	return (s3);
}
