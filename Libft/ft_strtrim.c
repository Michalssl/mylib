/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:25:43 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/25 14:35:40 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_in(char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	s;
	size_t	e;
	char	*f_str;

	s = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[s] && set_in(s1[s], set))
		s++;
	e = ft_strlen(s1);
	while (e > s && set_in(s1[e - 1], set))
		e--;
	f_str = malloc(e - s + 1);
	if (!f_str)
		return (NULL);
	ft_strlcpy(f_str, s1 + s, e - s + 1);
	return (f_str);
}
