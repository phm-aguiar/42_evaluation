/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:22:34 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/24 10:59:48 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	index;
	size_t	len;
	char	c;

	index = 0;
	len = ft_strlen(s);
	while (index < len)
	{
		c = s[index];
		write(fd, &c, 1);
		index++;
	}
}
