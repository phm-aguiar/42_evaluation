/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:27:02 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/03 19:01:58 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoil(const char *nptr)
{
	int			count;
	int			signal;
	long long	res;

	count = 0;
	signal = 1;
	res = 0;
	while (((nptr[count] >= 9 && nptr[count] <= 13) || nptr[count] == 32))
		count++;
	if (nptr[count] == '+' || nptr[count] == '-')
	{
		if (nptr[count] == '-')
			signal = signal * -1;
		count++;
	}
	while (nptr[count] >= '0' && nptr[count] <= '9')
	{
		res = (nptr[count] - '0') + res * 10;
		count++;
	}
	return (res * signal);
}
