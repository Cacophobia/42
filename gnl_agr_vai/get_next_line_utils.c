/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:47:27 by nranna            #+#    #+#             */
/*   Updated: 2024/01/12 05:45:06 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter])
		counter++;
	return (counter);
}

char	*ft_strrchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	if (!s)
		return (NULL);
	if (!c)
		return (NULL);
	while (s[counter])
	{
		if (s[counter] == (char)c)
			return ((char *)&s[counter]);
		counter++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	counter;
	size_t	counter2;
	char	*s3;

	if (!s1)
	{
		s1 = (char *)malloc(1);
		s1[0] = '\0';
	}
	s3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s2 || !s3)
		return (NULL);
	counter = 0;
	while (s1[counter])
	{
		s3[counter] = s1[counter];
		counter++;
	}
	counter2 = 0;
	while (s2[counter2++])
		s3[counter + counter2] = s2[counter2];
	s3[counter + counter2] = '\0';
	free(s1);
	return (s3);
}
