/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:39:27 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/26 15:06:37 by melkhatr         ###   ########.fr       */
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

// int main ()
// {
// 	char r[]= "helcccccclo";
// 	char s[] = "worlddd";
// 	printf("%s\n",ft_memmove(r,s,5));
// 		printf("%s\n",memmove(r,s,5));

// }