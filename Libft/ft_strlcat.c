/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:01:12 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/25 14:12:24 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	e;
	size_t	r;

	r = ft_strlen(src);
	if (!dst && size == 0)
	{
		return (r);
	}
	j = ft_strlen(dst);
	e = j;
	if (size <= j)
	{
		return (size + r);
	}
	i = 0;
	while (src[i] && j + 1 < size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = 0;
	return (e + r);
}
