/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:47:44 by nranna            #+#    #+#             */
/*   Updated: 2023/11/12 11:18:36 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*psrc;
	char	*pdest;
	char	*psrc_end;
	char	*pdest_end;	

	psrc = (char *)src;
	pdest = (char *)dest;
	psrc_end = psrc + (n - 1);
	pdest_end = pdest + (n - 1);
	if (pdest == psrc)
		return (dest);
	else if (pdest < psrc)
	{
		while (n--)
			*pdest++ = *psrc++;
	}
	else if (pdest > psrc)
	{
		while (n--)
			*pdest_end-- = *psrc_end--;
	}
	return (dest);
}
