/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:18:14 by nranna            #+#    #+#             */
/*   Updated: 2023/11/07 15:52:43 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"//
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		((char *)s)[counter] = '\0';
		counter++;
	}
}

int	main(void)
{
	char	test[] = "test";
	char	test1[] = "test";
	bzero (test, sizeof(test));
	ft_bzero (test1, sizeof(test1));
	return (0);
}
