/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:30:01 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/03 16:47:53 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
/*	Headers for mandatory functions */

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t n_items, size_t size);
int		ft_isalnum(int content);
int		ft_isalpha(int c);
int		ft_isascii(int content);
int		ft_isdigit(int input);
int		ft_isprint(int content);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_memset(void *str, int c, size_t size);
char	*ft_strchr(const char *string, int c);
char	*ft_strdup(const char *src);
size_t	ft_strlcat(char *dest, const char *src, size_t catsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size);
size_t	ft_strlen(const char *content);
int		ft_strncmp(const char *str1, const char *str2, size_t num);
char	*ft_strnstr(const char *haystack, const char *tofind, size_t len);
char	*ft_strrchr(const char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
/* Mandatory Part 1 Functions */

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);
/* Mandatory Part 2 Functions */

#endif