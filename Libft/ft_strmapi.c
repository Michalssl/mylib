/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:27:13 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/24 16:51:05 by melkhatr         ###   ########.r       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*r;
	size_t	len;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	r = malloc((len + 1) * sizeof(char));
	if (r == NULL)
		return (NULL);
	r[len] = '\0';
	while (s[i] != '\0')
	{
		r[i] = (*f)(i, s[i]);
		i++;
	}
	return (r);
}

// char fts_toupper(unsigned int index,char c) {
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		c = c -32 ;
// 	}
// 	return (c);
// }
// int main ()
// {
// 	char r[]= "hello";

// 	printf("%s\n",ft_strmapi(r,fts_toupper));
// }