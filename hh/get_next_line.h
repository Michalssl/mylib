/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:47:18 by melkhatr          #+#    #+#             */
/*   Updated: 2024/11/21 15:56:22 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 45
# endif
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strdup(char *s);
ssize_t	ft_strchr(char *s);
size_t	ft_strlen(char *s);
char	*ft_substr(char *s, ssize_t l, ssize_t len);
char	*ft_strdup(char *str);
char	*ft_strjoin(char *buf, char *tmp);

#endif
