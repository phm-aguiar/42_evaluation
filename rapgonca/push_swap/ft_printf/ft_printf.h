/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  rapgonca < rapgonca@student.42sp.org.b    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:39:54 by  rapgonca         #+#    #+#             */
/*   Updated: 2023/09/17 00:07:22 by  rapgonca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define HEXALOW	"0123456789abcdef"
# define HEXAUPP	"0123456789ABCDEF"

int	ft_printf(const char *str, ...);
int	ft_puthx(unsigned int nb, char c);
int	ft_putunsnbr(unsigned int n, int fd);
int	ft_putp(unsigned long nb);

#endif
