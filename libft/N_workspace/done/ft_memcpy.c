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
	char	*pdest;
	const char	*psrc;

	pdest = (char *)dest;
	psrc = (const char *)src;
	counter = 0;
	while (counter < n)
	{
		pdest[counter] = psrc[counter];
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
	printf("\nNow for my memcpy\n\nSource: %s\n", src);
        printf("Destination: %s\n", dest);
	return(0);
}
