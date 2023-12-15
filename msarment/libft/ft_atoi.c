/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:08:11 by msarment          #+#    #+#             */
/*   Updated: 2023/08/20 14:14:49 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_limit(int nbr, int next, int neg);

int	ft_atoi(const char *nptr)
{
	int		i;
	int		neg;
	long	nbrl;

	nbrl = nbr;
	nbr = 0;
	neg = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] > 8 && nptr[i] < 14))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		if (check_limit(nbr, nptr[i] - '0', neg))
			return (0);
		nbr = nbr * 10 + (nptr[i++] - '0');
	}
	return (nbr * neg);
}

static int	check_limit(int nbr, int next, int neg)
{
	if (neg > 0)
	{
		if (nbr > (2147483647 - next) / 10)
			return (1);
	}
	else
	{
		if (-nbr < (-2147483648 + next) / 10)
			return (1);
	}
	return (0);
}
