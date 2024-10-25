/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:50:42 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/25 13:58:24 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	d_count(long int i)
{
	int	c;

	c = 0;
	if (i == 0)
	{
		return (1);
	}
	if (i < 0)
	{
		c = 1;
		i = -i;
	}
	while (i != 0)
	{
		i /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = (long)n;
	size = d_count(nbr);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	else if (nbr == 0)
	{
		str[0] = '0';
	}
	while (nbr > 0)
	{
		str[--size] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
