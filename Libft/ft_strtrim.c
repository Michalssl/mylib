/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:25:43 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/28 11:50:52 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_start(const char *s1, const char *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	return (start);
}

static size_t	find_end(const char *s1, const char *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*t;

	if (!s1 || !set)
		return (NULL);
	start = find_start(s1, set);
	end = find_end(s1, set, start);
	len = end - start;
	t = malloc(len + 1);
	if (!t)
		return (NULL);
	if (len > 0)
	{
		ft_strlcpy(t, s1 + start, len + 1);
	}
	else
	{
		t[0] = '\0';
	}
	return (t);
}
