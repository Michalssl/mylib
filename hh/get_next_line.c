/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:31:57 by melkhatr          #+#    #+#             */
/*   Updated: 2024/11/21 18:46:38 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"   read(fd,buffer, 41) 
static char	*f_all(char **s)
{
	free(*s);
	*s = NULL;
	return (NULL);
}

static char	*ex_line(char **str)
{
	char	*line;
	char	*new_buffer;
	ssize_t	index;

	index = ft_strchr(*str);
	if (index >= 0)
	{
		line = ft_substr(*str, 0, index + 1);
		new_buffer = ft_substr(*str, index + 1, ft_strlen(*str) - index - 1);
		if (!line || !new_buffer)
		{
			free(line);
			free(new_buffer);
			return (NULL);
		}
		free(*str);
		*str = new_buffer;
	}
	else
	{
		line = ft_substr(*str, 0, ft_strlen(*str));
		free(*str);
		*str = NULL;
	}
	return (line);
}

char	*get_next_line(int fd)   
{
	static char	*buffer = NULL;
	char		*temp;
	ssize_t		read_bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	temp = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	while (ft_strchr(buffer) == -1)
	{
		read_bytes = read(fd, temp, BUFFER_SIZE);
		if (read_bytes <= 0)
			break ;
		temp[read_bytes] = '\0';
		buffer = ft_strjoin(buffer, temp);
		if (!buffer)
			return (NULL);
	}
	free(temp);
	if (!buffer || *buffer == '\0')
		return (f_all(&buffer));
	return (ex_line(&buffer));
}
