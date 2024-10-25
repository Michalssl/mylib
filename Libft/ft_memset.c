/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:39:29 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/25 14:02:57 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*o;
	size_t			i;

	if (!s)
		return (NULL);
	o = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		o[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
