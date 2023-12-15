/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:10:19 by phenriq2          #+#    #+#             */
/*   Updated: 2023/09/13 17:18:37 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/nfs/homes/phenriq2/42_aval/csilva-m_printf/Mandatory/includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int		num;
	void	*ptr;

	num = ft_printf("%s %d %i %X %x %u %c %p","ola mundo", 42, -42,42,-42,42,'a',&ptr);
	ft_printf("%d", num);
}
