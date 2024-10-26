/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:06:19 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/26 15:39:51 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	count_size;
	size_t	i;

	count_size = count * size;
	i = 0;
	ptr = malloc(count_size);
	if (!ptr)
		return (NULL);
	while (i < count_size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
