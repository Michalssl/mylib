/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:14:24 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/26 15:04:17 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
	{
		return (NULL);
	}
	ns = (char *)malloc(len + 1);
	if (!ns)
	{
		return (NULL);
	}
	if (start >= ft_strlen(s))
	{
		return (ns);
	}
	while (i < len && s[start + i])
	{
		ns[j++] = s[start + i++];
	}
	ns[j] = '\0';
	return (ns);
}

// int main()
// {
// 	char r[] = "hello";
// 	printf("%s",ft_substr(r,2,15));
// }