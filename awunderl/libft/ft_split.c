/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awunderl <awunderl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:35:06 by awunderl          #+#    #+#             */
/*   Updated: 2023/08/24 16:48:46 by awunderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ptr_alloc(char **split, const char *s, char c, int words);
static int	ft_wordlength(char const *s, char c);
static int	ft_wordcount(char const *s, char c);
static void	ft_writeword(char const *s, char *word, char c);

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		j;
	int		k;
	int		words;

	j = 0;
	k = 0;
	words = ft_wordcount(s, c);
	split = (char **)malloc((words + 1) * 8);
	if (split == NULL)
		return (NULL);
	ft_ptr_alloc(split, s, c, words);
	return (split);
}

static int	ft_wordcount(char const *s, char c)
{
	int	i;

	i = 0;
	if (*s == '\0')
		return (i);
	if (c == '\0')
		return (1);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

static int	ft_wordlength(char const *s, char c)
{
	int	j;

	j = 0;
	while (*s != c && *s != '\0')
	{
		j++;
		s++;
	}
	return (j);
}

static void	ft_writeword(char const *s, char *word, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s && *s != c)
	{
		word[i] = *s;
		i++;
		s++;
	}
	word[i] = '\0';
}

static void	ft_ptr_alloc(char **split, const char *s, char c, int words)
{
	size_t	i;
	size_t	wordlength;
	size_t	j;

	i = 0;
	wordlength = 0;
	j = 0;
	while (i < (size_t)words)
	{
		while (s[j] == c)
			j++;
		wordlength = ft_wordlength(&s[j], c);
		split[i] = (char *)malloc(wordlength + 1);
		if (!split[i])
			return ;
		ft_writeword(&s[j], split[i], c);
		j = j + wordlength;
		i++;
	}
	split[i] = NULL;
}
