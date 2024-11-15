/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:31:57 by melkhatr          #+#    #+#             */
/*   Updated: 2024/11/14 20:44:07 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*sline(char *buffer)
{
	char	*left_c;
	ssize_t	i;

	i = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
	{
		i++;
	}
	if (buffer[i] == 0 || buffer[1] == 0)
	{
		return (NULL);
	}
	left_c = ft_substr(buffer, i + 1, ft_strlen(buffer) - i);
	if (*left_c == 0)
	{
		free(left_c);
		left_c = NULL;
	}
	buffer[i + 1] = '\0';
	return (left_c);
}

static char	*buffer_fill(int fd, char *left_c, char *buffer)
{
	ssize_t	s_read;
	char	*tmp;

	s_read = 1;
	while (s_read > 0)
	{
		s_read = read(fd, buffer, BUFFER_SIZE);
		if (s_read == -1)
		{
			free(left_c);
			return (NULL);
		}
		else if (s_read == 0)
			break ;
		buffer[s_read] = '\0';
		if (!left_c)
			left_c = ft_strdup("");
		tmp = left_c;
		left_c = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (left_c);
}

char	*get_next_line(int fd)
{
	static char	*left_c;
	char		*line;
	char		*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(left_c);
		free(buffer);
		left_c = NULL;
		buffer = NULL;
		return (NULL);
	}
	if (!buffer)
	{
		return (NULL);
	}
	line = buffer_fill(fd, left_c, buffer);
	free(buffer);
	left_c = sline(line);
	return (line);
}
