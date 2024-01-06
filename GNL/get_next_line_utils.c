/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:23:45 by nranna            #+#    #+#             */
/*   Updated: 2024/01/06 15:30:07 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	while (s[counter])
		counter++;
	return (counter);
}

char    *ft_strdup(const char *s)
{
        char    *new_s;
        size_t  s_len;
        size_t  counter;

        counter = 0;
        s_len = ft_strlen(s);
        new_s = (char *)malloc(s_len + 1);
        if (!new_s)
        {
                return (NULL);
        }
        while (counter <= s_len)
        {
                new_s[counter] = s[counter];
                counter++;
        }
        return (new_s);
}

char    *ft_strjoin(char *s1, char *s2, int flag)
{
        size_t  counter;
        size_t  counter2;
        size_t  s1s2;
        char    *s3;

	if (!s1 && !s2)
		return (NULL);
        if (!s1)
                return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
        s1s2 = (ft_strlen(s1) + ft_strlen(s2));
        s3 = (char *)malloc(s1s2 + 1);
        if (!s2 || !s3)
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

char    *ft_strchr(const char *s, int c)
{
        while (*s != (char)c)
        {
                if (*s++ == '\0')
                        return (NULL);
        }
        return ((char *)s);
}

char    *easy_gnl(int fd)
{
        char    *stockpile;
        char    *buffer;
        int     chars_read;
        int     BUFFER_SIZE = 42;

        stockpile = NULL;
        buffer = malloc(BUFFER_SIZE + 1);
        chars_read = 0;
        while (42)
        {
                chars_read = read(fd, buffer, BUFFER_SIZE);
                stockpile = ft_strjoin(stockpile, buffer, 1);
                if (chars_read <= 0 || ft_strchr(stockpile, '\n') != 0)
                {
                        free(buffer);
                        break;
                }
        }
        return (stockpile);
}

int     main(void)
{
        int     fd;
	char	*str = NULL;
	
        fd = open("test.txt", O_RDONLY);
	str = easy_gnl(fd);
	while (str)
	{
		printf("%s", str);
		free(str);
		str = easy_gnl(fd);
	}
        return (0);
}
