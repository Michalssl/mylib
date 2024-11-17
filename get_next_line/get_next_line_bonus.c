/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:42:24 by melkhatr          #+#    #+#             */
/*   Updated: 2024/11/17 10:57:13 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	static char	*left_c[MAX_FD];
	char		*line;
	char		*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(left_c[fd]);
		free(buffer);
		left_c[fd] = NULL;
		buffer = NULL;
		return (NULL);
	}
	if (!buffer)
	{
		return (NULL);
	}
	line = buffer_fill(fd, left_c[fd], buffer);
	free(buffer);
	if (!line)
		return (NULL);
	left_c[fd] = sline(line);
	return (line);
}
// #include <stdio.h>

// char *get_next_line(int fd);

// int main(void)
// {
//     int fd1, fd2;
//     char *line1;
//     char *line2;
//     fd1 = open("file1.txt", O_RDONLY);
//     if (fd1 < 0)
//     {
//         return 1;
//     }
//     fd2 = open("file2.txt", O_RDONLY);
//     if (fd2 < 0)
//     {
//         return 1;
//     }
//     while ((line1 = get_next_line(fd1)) != NULL || (line2 = get_next_line(fd2)) != NULL)
//     {
//         if (line1)
//         {
//             printf("File1: %s", line1);
//             free(line1);
//         }
//         if (line2)
//         {
//             printf("File2: %s", line2);
//             free(line2);
//         }
//     }
//     close(fd1);
//     close(fd2);
//     return 0;
// }
