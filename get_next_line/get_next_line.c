/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:33:11 by nranna            #+#    #+#             */
/*   Updated: 2024/01/06 16:38:54 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char    *ft_strjoin(char *s1, char *s2, int flag);
int	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);


char	*get_next_line(int fd)
{
	char	*stockpile;
	char	*buffer;
	//buffer_size has to be declared in the header.
	int	BUFFER_SIZE = 3;
	int	chars_read;

	stockpile = NULL;
	buffer = malloc(BUFFER_SIZE + 1);
	chars_read = 0;
	while (42)
	{
		chars_read = read(fd, buffer, BUFFER_SIZE);
		if (chars_read == 0)
		{
			free(buffer);
			break;
		}
		stockpile = ft_strjoin(buffer, stockpile, 1);
		if (ft_strchr(stockpile, '\n') != NULL)
		{
			free(buffer);
			break;
		}
	}
	return (stockpile);
}

int	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	while (s[counter])
		counter++;
	return (counter);
}

char	*ft_strjoin(char *s1, char *s2, int flag)
{
	int	counter;
	int	counter2;
	int	s1s2;
	char	*s3;
	
	if (!s1)
		return (s2);
	s1s2 = (ft_strlen(s1) + ft_strlen(s2));
	s3 = (char *)malloc(s1s2 + 1);
	if (!s3)
		return (NULL);
	counter = 0;
	while (s1[counter])
	{
		s3[counter] = s1[counter];
		counter++;
	}
	counter2 = 0;
	while (s2[counter2])
	{
		s3[counter + counter2] = s2[counter2];
		counter2++;
	}
	s3[counter + counter2] = '\0';
	if (flag == 1)
		free (s1);
	return (s3);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s++ == '\0')
			return (NULL);
	}
	return ((char *)s);
}

int     main(void)
{
        int     fd;
        char    *str = NULL;

        fd = open("test.txt", O_RDONLY);
	str = get_next_line(fd);
	printf("%s", str);
	return (0);
}
