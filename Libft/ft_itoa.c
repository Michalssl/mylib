/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:50:42 by melkhatr          #+#    #+#             */
/*   Updated: 2024/10/28 13:34:17 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	if (i == 0)
		return (1);
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

static char	*create_itoa_string(int n)
{
	int		length;
	char	*str;

	length = ft_digit_count(n);
	str = malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[length] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nb;
	int			i;

	nb = n;
	str = create_itoa_string(nb);
	if (!str)
		return (NULL);
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	i = ft_digit_count(n) - 1;
	while (nb > 0)
	{
		str[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
