/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:06:19 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/28 17:40:12 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;

	a = (void *)malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, (nmemb * size));
	return (a);
}

// int main()
// {
//     void *ptr = calloc(5, sizeof(int));
//     if (ptr == NULL)
//     {
//       return (0);
//     }

//     printf("memory: %p\n", ptr);

//     int i = 0;
//     while (i < 5)
//     {
//         printf("%d: %d\n", i, ((int *)ptr)[i]);
//         i++;
//     }
//     return (0);
// }