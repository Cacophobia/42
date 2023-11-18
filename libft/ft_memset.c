/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:12:41 by nranna            #+#    #+#             */
/*   Updated: 2023/11/18 08:01:39 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			counter;
	unsigned char	*ptr_counter;
	unsigned char	ptr_value;

	ptr_counter = (unsigned char *)s;
	ptr_value = (unsigned char)c;
	counter = 0;
	while (counter < n)
	{
		*ptr_counter = ptr_value;
		ptr_counter++;
		counter++;
	}
	return (s);
}
