/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:14:24 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/24 13:48:23 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*w;
	size_t	l;
	size_t	f;

	if (!s)
	{
		return (0);
	}
	f = 0;
	l = ft_strlen(s);
	if (start < l)
	{
		f = l - start;
	}
	if (start > l)
	{
		f = len;
	}
	w = (char *)malloc(sizeof(char) * (f + 1));
	if (!w)
	{
		return (0);
	}
	ft_strlcpy(w, s + start, f + 1);
	return (w);
}
