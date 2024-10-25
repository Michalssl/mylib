/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:01:58 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/25 17:52:09 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*loc_w(const char *start, size_t length)
{
	char	*word;

	word = malloc(length + 1);
	if (word)
	{
		ft_strlcpy(word, start, length + 1);
	}
	return (word);
}

static void	skip_d(const char **s, char c)
{
	while (**s == c)
		(*s)++;
}

static const char	*firs_w(const char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	size_t		count;
	char		**result;
	size_t		i;
	const char	*start;

	i = 0;
	if (!s)
		return (NULL);
	count = word_count(s, c);
	result = malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*s)
	{
		skip_d(&s, c);
		start = firs_w(s, c);
		while (*s && *s != c)
			s++;
		if (start < s)
		{
			result[i++] = loc_w(start, s - start);
		}
	}
	result[i] = NULL;
	return (result);
}
