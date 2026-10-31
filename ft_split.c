/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <mohoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 13:56:12 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/29 14:17:05 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static	size_t	ft_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count ++;
		i++;
	}
	return (count);
}

static char	*ft_word(const char *start, size_t len)
{
	char	*word;

	word = malloc (len + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, start, len);
	word[len] = '\0';
	return (word);
}

static char	**ft_free(char **res, size_t n)
{
	while (n > 0)
	{
		n--;
		free(res[n]);
	}
	free(res);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	i;
	size_t	len;
	size_t	n;

	if (!s)
		return (NULL);
	n = ft_count(s, c);
	res = malloc(sizeof(char *) * (n + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < n)
	{
		while (*s == c)
			s++;
		len = ft_wordlen(s, c);
		res[i] = ft_word (s, len);
		if (!res[i])
			return (ft_free(res, i));
		s = s + len;
		i++;
	}
	res[i] = NULL;
	return (res);
}
