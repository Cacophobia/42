/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:57:46 by nranna            #+#    #+#             */
/*   Updated: 2023/11/17 07:29:25 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;

	little_size = ft_strlen(little);
	if (!little_size)
		return((char *)big);
	while (*big && little_size <= len--)
	{
		if (!ft_memcmp(big, little, little_size))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
