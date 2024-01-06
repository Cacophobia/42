/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:43:16 by nranna            #+#    #+#             */
/*   Updated: 2024/01/06 11:19:07 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2, int flag)
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
		s3[counter + counter2] = s2[counter2];
		counter2++;
	}
	s3[counter + counter2] = '\0';
	if (flag == 0)
		return (s3);
	if (flag == 1)
	{
		free (s1);
		return (s3);
	}
	return (s3);
}
