/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:06:19 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/27 15:58:03 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = (void *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
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