/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:40:07 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/28 17:24:45 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!result)
	{
		return (NULL);
	}
	ft_strlcpy(result, s1, len1 + 1);
	ft_strlcpy(result + len1, s2, len2 + 1);
	return (result);
}
// int main()
// {
// 	char r[] = "hello";
// 	char b[] = "world";
// 	printf("%s\n",ft_strjoin(r,b));
// }
