/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:50:58 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/28 15:23:28 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	s;
	int	ans;

	c = 0;
	s = 1;
	ans = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	if (str[c] == '-' || str[c] == '+')
		if (str[c++] == '-')
			s *= -1;
	while (str[c] >= '0' && str[c] <= '9')
	{
		ans = (ans * 10) + (str[c] - '0');
		c++;
	}
	return (ans * s);
}
