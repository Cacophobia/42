/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:17:24 by nranna            #+#    #+#             */
/*   Updated: 2023/11/01 13:38:18 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	counter;
	int	sign;

	result = 0;
	counter = 0;
	sign = 1;
	while (nptr[counter])
	{
		while ((nptr[counter] == ' ') || (nptr[counter] >= 9 && nptr[counter] <= 13))
			counter++;
		if (nptr[counter] == '-' || nptr[counter] == '+')
		{
			if (nptr[counter + 1] == '-' || nptr[counter + 1] == '+')
				return (0);
			else if (nptr[counter] == '-')
				sign = sign * -1;
		}
		if (nptr[counter] >= '0' && nptr[counter] <= '9')
			result = result * 10 + (nptr[counter] - '0');
		counter++;
	}
	return (result * sign);
}
