/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:54:46 by nranna            #+#    #+#             */
/*   Updated: 2023/11/17 13:16:58 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	s_len;
	size_t	counter;

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
