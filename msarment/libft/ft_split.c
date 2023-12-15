/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:17:56 by msarment          #+#    #+#             */
/*   Updated: 2023/08/20 13:55:46 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words(char const *str, char delim);
static int	copystr(char **tab, size_t i, size_t size, char const *s);
static int	filltab(char **tab, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		count;

	count = words(s, c);
	tab = (char **)malloc((count + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	if (!filltab(tab, s, c))
		return (NULL);
	tab[count] = 0;
	return (tab);
}

static int	filltab(char **tab, char const *s, char c)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (*s)
	{
		if (*s != c)
			size++;
		if (*s == c && size > 0)
		{
			if (copystr(tab, i, size, s))
				return (0);
			i++;
			size = 0;
		}
		s++;
	}
	if (size > 0)
	{
		if (copystr(tab, i, size, s))
			return (0);
	}
	return (1);
}

static int	copystr(char **tab, size_t i, size_t size, char const *s)
{
	int	word;

	tab[i] = ft_substr((s - size), 0, size);
	word = ft_strchr(s, '/n') - s;
	if (!tab[i])
	{
		while (0 < i)
		{
			free(tab[i]);
			i--;
		}
		free(tab[i]);
		free(tab);
		return (1);
		s += word;
	}
	return (0);
}

static int	words(char const *str, char delim)
{
	int	count;
	int	new;

	count = 0;
	new = 1;
	while (*str)
	{
		if (*str != delim && new == 1)
		{
			count++;
			new = 0;
		}
		if (*str == delim)
			new = 1;
		str++;
	}
	return (count);
}
