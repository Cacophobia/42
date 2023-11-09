/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:47:44 by nranna            #+#    #+#             */
/*   Updated: 2023/11/09 07:22:50 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	const char	*psrc;
	char *pdest;

	if (pdest = NULL && psrc = NULL)
		return (NULL);
	else if (pdest < psrc)
	{
		while ((n - 1) > 0)
		{
			*(pdest++) = *(psrc++);
		}
	}
	else if (pdest > psrc)
	{
		pdest = pdest + n;
		psrc = psrc + n;
		while ((n - 1) > 0)
		{
			*(pdest--) = *(psrc--);
		}
	}
	return (dest)
}
