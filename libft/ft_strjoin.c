/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:43:16 by nranna            #+#    #+#             */
/*   Updated: 2023/11/21 14:41:15 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
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
	return (s3);
}
