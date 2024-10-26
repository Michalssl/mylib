/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:01:12 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/26 14:19:40 by melkhatr         ###   ########.fr       */
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
// int main() {
//     char f[20] = "hello";
//     char g[] = "world";

//     size_t result = ft_strlcat(f, g, 20);
//     printf("%s\n", f);
//     printf("%u\n", result);
// 				char s[20] = "hello";
//     char j[] = "world";
// 				size_t result1 = strlcat(s,j,20);
//     printf("%u\n",result1);
//     return (0);
// }