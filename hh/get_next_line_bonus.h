/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkhatr <melkhatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:00:18 by melkhatr          #+#    #+#             */
/*   Updated: 2024/11/21 17:21:10 by melkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 15
# endif
# define MAX_FD 1024
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