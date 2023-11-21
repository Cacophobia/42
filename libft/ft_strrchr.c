/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:50:49 by nranna            #+#    #+#             */
/*   Updated: 2023/11/21 14:39:36 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_size;

	s_size = ft_strlen(s);
	if ((char)c == '\0')
	{
		return ((char *)(s + s_size));
	}
	while (s_size-- > 0)
	{
		if (s[s_size] == (char)c)
		{
			return ((char *)(s + s_size));
		}
	}
	return (NULL);
}
