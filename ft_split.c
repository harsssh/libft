/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemizuki <kemizuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:13:26 by kemizuki          #+#    #+#             */
/*   Updated: 2023/05/20 12:17:51 by kemizuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*skip_char(const char *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static char	*find(const char *s, char c)
{
	while (*s && *s != c)
		s++;
	return ((char *)s);
}

static size_t	count_words(const char *s, char c)
{
	size_t	n;
	char	*t;

	n = 0;
	while (*s)
	{
		s = skip_char(s, c);
		t = find(s, c);
		if (s != t)
			n++;
		s = t;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	size_t	i;
	char	**buf;
	char	*end;

	wc = count_words(s, c);
	buf = ft_calloc(wc + 1, sizeof(char *));
	if (buf == NULL)
		return (NULL);
	i = 0;
	while (i < wc)
	{
		s = skip_char(s, c);
		end = find(s, c);
		if (s != end)
			buf[i++] = ft_substr(s, 0, end - s);
		s = end;
	}
	buf[i] = NULL;
	return (buf);
}
