/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:08:21 by nranna            #+#    #+#             */
/*   Updated: 2024/01/12 06:21:09 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*get_buffer(int fd, char *stockpile);
char	*get_line(char *stockpile);
char	*erase_line(char *stockpile);
char	*ft_strcopy(char *src, char *dest);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlen(const char *s);

#endif
