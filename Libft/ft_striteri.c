/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:32:19 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/26 14:22:08 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
	{
		return ;
	}
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void fts_toupper(unsigned int index,char *c) {
// 	if (*c >= 'a' && *c <= 'z')
// 	{
// 		*c = *c -32 ;
// 	}
// }
// int main()
// {
// 	char r[]= "hello";
// 	ft_striteri(r,fts_toupper);
// 	printf("%s",r);
// }