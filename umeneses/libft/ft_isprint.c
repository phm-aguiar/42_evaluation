/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:07:03 by bira              #+#    #+#             */
/*   Updated: 2023/09/03 16:48:12 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int content)
{
	return (content >= 32 && content <= 126);
}
