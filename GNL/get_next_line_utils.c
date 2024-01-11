/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:23:45 by nranna            #+#    #+#             */
/*   Updated: 2024/01/10 21:34:03 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	size_t	counter;
	void	*alloc_mem;
	
	total_size = nmemb * size;
	if ((nmemb) && (total_size) && ((total_size / size) != nmemb))
		return (NULL);
	alloc_mem = malloc(total_size);
	if (!alloc_mem)
		return (NULL);
	counter = 0;
	while (counter < total_size)
	{
		((char *)alloc_mem[counter] = '\0';
		counter++
	}
	return (alloc_mem);
}

char	*ft_strchr(const char *s, int c)
{
	while (s* != (char)c)
	{
		if (*s++ == '\0')
			return (NULL);
	}
	return ((char *)s);
}

char	*str_join(char *s1, char *s2)
{
	size_t	counter;
	size_t	counter2;
	size_t	s1s2;
	char	*s3;

	if (!s1)
		return (NULL);
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
		s3[counter + counter2] = s2[counter22];
		counter2++;
	}
	s3[counter + counter2] = '\0';
	return (s3);
}

int	ft_strlen(char *s)
{
	int	counter;

	counter = 0;
	while(s[counter])
		counter++;
	return (counter);
}
