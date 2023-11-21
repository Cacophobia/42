/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:50:44 by nranna            #+#    #+#             */
/*   Updated: 2023/11/21 14:27:11 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*alloc_mem;

	total_size = nmemb * size;
	if ((nmemb) && (total_size) && ((total_size / size) != nmemb))
		return (NULL);
	alloc_mem = malloc(total_size);
	if (!alloc_mem)
	{
		return (NULL);
	}
	ft_bzero(alloc_mem, total_size);
	return (alloc_mem);
}
