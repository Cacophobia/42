/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:05:23 by nranna            #+#    #+#             */
/*   Updated: 2023/11/12 20:13:54 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

/*size_t	strlcat(char *dst, const char *src, size_t size)
{
	char	*pdest;
	char	*psrc;

	pdest = dst;
	psrc = 
}*/

int	main(void)
{
	char	*test = "test";
	char	*ntest = "hello";
	printf("%ld\n",strlcat(test, ntest, 1));
	return (0);
}
