/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:04:03 by nranna            #+#    #+#             */
/*   Updated: 2023/11/14 10:32:08 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	needle;
	unsigned char	*haystack;

	needle = (unsigned char)c;
	haystack = (unsigned char *)s;
	while (n--)
	{
		if (*haystack == needle)
			return ((void *)haystack);
		haystack++;
	}
	return (NULL);
}
