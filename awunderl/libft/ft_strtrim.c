/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:58:55 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/24 13:56:22 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = (ft_strlen((char *)s1) - 1);
	while (s1[start] && ft_check(set, s1[start]))
		start++;
	while (end > start && ft_check(set, s1[end]))
		end--;
	str = (char *)malloc(end - start + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
