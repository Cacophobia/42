/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:24:00 by nranna            #+#    #+#             */
/*   Updated: 2024/01/10 21:22:07 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*read_function(int fd, char *stockpile);
char	*get_line(char *stockpile);
char	*erase_line(char *stockpile);
char	*ft_strchr(const char *s, int c);
void	*ft_calloc(size_t nmemb, size_t size);
int	ft_strlen(char *s);
int	ft_strjoin(char *s1, char *s2);

#endif
