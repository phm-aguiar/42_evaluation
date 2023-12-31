/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:42:01 by gde-sa            #+#    #+#             */
/*   Updated: 2023/08/16 10:19:58 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || \
		(c >= 'A' && c <= 'Z') || \
		(c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
