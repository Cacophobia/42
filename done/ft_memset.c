/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:52:24 by nranna            #+#    #+#             */
/*   Updated: 2023/11/08 14:53:56 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			counter;
	unsigned char	*ptr_counter;
	unsigned char	ptr_value;

	ptr_counter = (unsigned char *)ptr;
	ptr_value = (unsigned char)value;
	counter = 0;
	while (counter < num)
	{
		*ptr_counter = ptr_value;
		ptr_counter++;
		counter++;
	}
	return (ptr);
}
