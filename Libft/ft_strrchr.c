/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:52:51 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/27 11:54:12 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*l_occ;

	i = 0;
	l_occ = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			l_occ = (char *)s + i;
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)s + i);
	}
	return (l_occ);
}

// int main ()
// {
// 	char r[] = "hello";
// 	printf("%s",ft_strrchr(r,'l'));
// }
