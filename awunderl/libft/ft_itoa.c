/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:24:30 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/11 15:40:53 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_size(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		len++;
		n = (n / 10);
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			neg;
	int			len;
	long int	number;

	neg = (n < 0);
	number = n;
	if (neg)
		number = (number * -1);
	len = nbr_size(number);
	str = (char *)malloc(len + neg + 1);
	if (!(str))
		return (NULL);
	if (neg)
		str[0] = '-';
	if (number == 0)
		str[0] = '0';
	str[len + neg] = '\0';
	while (number > 0)
	{
		str[(len - 1) + neg] = (number % 10) + '0';
		number = number / 10;
		len--;
	}
	return (str);
}
