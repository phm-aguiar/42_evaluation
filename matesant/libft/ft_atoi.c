/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:22:05 by matesant          #+#    #+#             */
/*   Updated: 2023/08/06 11:35:31 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	indx;
	int	sig;
	int	mult;

	indx = 0;
	mult = 0;
	sig = 1;
	while ((str[indx] == ' ') || (str[indx] >= 9 && str[indx] <= 13))
		indx++;
	if (str[indx] == '-' || str[indx] == '+')
	{
		if (str[indx] == '-')
			sig *= -1;
		indx++;
	}
	while (str[indx] >= '0' && str[indx] <= '9')
	{
		if (str[indx] == '-' || str[indx] == '+')
			return (0);
		mult = mult * 10 + (str[indx] - '0');
		indx++;
	}
	return (mult * sig);
}
