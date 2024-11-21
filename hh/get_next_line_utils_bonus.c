/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:42:21 by melkhatr          #+#    #+#             */
/*   Updated: 2024/11/21 15:56:44 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	size_t	i;
	char	*ptr;

	ptr = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < ft_strlen(str))
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char *buf, char *tmp)
{
	char	*s;
	size_t	i;
	size_t	j;

	if (buf == NULL)
		return (ft_strdup(tmp));
	s = malloc((ft_strlen(buf) + ft_strlen(tmp) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	while (i < ft_strlen(buf))
	{
		s[i] = buf[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(tmp))
	{
		s[i + j] = tmp[j];
		j++;
	}
	s[i + j] = '\0';
	free(buf);
	return (s);
}

ssize_t	ft_strchr(char *s)
{
	ssize_t	i;

	i = 0;
	if (!s)
		return (-1);
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_substr(char *s, ssize_t l, ssize_t len)
{
	char	*str;
	ssize_t	i;

	if (!s)
		return (NULL);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[l + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
