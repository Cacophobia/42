/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:43:17 by nranna            #+#    #+#             */
/*   Updated: 2023/10/25 13:54:06 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int	counter;
	unsigned char	*pdest;
	unsigned char	*psrc;

	counter = 0;
	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	while (counter < n)
	{
		*pdest = *psrc;
		counter++;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "Nathan";
	char	dest[7];

	memcpy(dest, src, sizeof(src));
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);

	ft_memcpy(dest, src, sizeof(src));
	printf("\nNow for my memcpy.\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	return (0);
}
