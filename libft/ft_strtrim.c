/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:21:16 by nranna            #+#    #+#             */
/*   Updated: 2023/11/17 20:36:13 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	s1_end;
	size_t	s1_start;

	if (!s1)
		return (NULL);
	s1_end = ft_strlen(s1);
	s1_start = 0;
	while (s1[s1_start] && ft_strchr(set, s1[s1_start]))
		s1_start++;
	while (s1_end > s1_start && ft_strchr(set, s1[s1_end - 1]))
		s1_end--;
	s2 = (char *)malloc((s1_end - s1_start + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy (s2, (s1 + s1_start), s1_end - s1_start + 1);
	return (s2);
}
