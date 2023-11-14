/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:12:24 by nranna            #+#    #+#             */
/*   Updated: 2023/11/12 11:12:27 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int				counter;
	unsigned char	*pdest;
	unsigned char	*psrc;

	counter = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	while (counter < n)
	{
		*pdest = *psrc;
		counter++;
		pdest++;
		psrc++;
	}
	return ((void *)pdest - counter);
}
