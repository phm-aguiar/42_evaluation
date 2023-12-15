/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:04:32 by csilva-m          #+#    #+#             */
/*   Updated: 2023/09/13 17:26:16 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEX_BASE "0123456789abcdef"
# define HEX_BASE_UPPER "0123456789ABCDEF"
# define DEC_BASE "0123456789"

int		ft_printf(const char *format, ...);
size_t	ft_strlen(const char *s);
int		ft_putnbr_base(long int nb, char *base);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putptr(unsigned long nb, char *base);

#endif
