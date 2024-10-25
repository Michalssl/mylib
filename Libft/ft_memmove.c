/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:39:27 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/25 11:07:08 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	long	j;

	if (dst < src)
	{
		j = 0;
		while ((size_t)j < len)
		{
			*(unsigned char *)(dst + j) = *(unsigned char *)(src + j);
			j++;
		}
		return (dst);
	}
	else
	{
		j = len - 1;
		while (j >= 0)
		{
			*(unsigned char *)(dst + j) = *(unsigned char *)(src + j);
			j--;
		}
		return (dst);
	}
}

/*int	main(void)
{
	char bi[] = {'h', 'g', 'a', 'a', 'a', 'a'}; // h h g a a a
	char c[] = {'a', 'a', 'a', 'a', 'a', 'a'};

	ft_memmove(c + 2, bi, 4);
	//ft_memset(bi,'b',4);

	printf("%s \n", c);
	//    printf("%s \n",bi);
}*/