/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:10:29 by matesant          #+#    #+#             */
/*   Updated: 2023/08/04 19:48:26 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	unsigned int	len;
	char			*nstr;

	len = ft_strlen(str);
	nstr = ft_calloc((len + 1), sizeof(char));
	if (!nstr)
		return (0);
	nstr = ft_memcpy(nstr, str, len);
	return (nstr);
}
