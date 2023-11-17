/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:24:41 by nranna            #+#    #+#             */
/*   Updated: 2023/11/15 15:56:32 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	counter;

	src_size = ft_strlen(src);
	counter = 0;
	if (size == 0)
	{
		return (src_size);
	}
	dst_size = ft_strlen(dst);
	if (dst_size >= size)
	{
		return (size + src_size);
	}
	else if (dst_size < size)
	{
		while (src[counter] && (dst_size + counter + 1) < size)
		{
			dst[dst_size + counter] = src[counter];
			counter++;
		}
	}
	dst[dst_size + counter] = '\0';
	return (dst_size + src_size);
}
