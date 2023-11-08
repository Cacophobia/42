/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:17:24 by nranna            #+#    #+#             */
/*   Updated: 2023/11/08 14:38:36 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	counter;
	int	sign;

	result = 0;
	counter = 0;
	sign = 1;
	while (nptr[counter] == ' ' || nptr[counter] == '\n'
		|| nptr[counter] == '\t' || nptr[counter] == '\v'
		|| nptr[counter] == '\r' || nptr[counter] == '\f')
	{
		counter++;
	}
	if (nptr[counter] == '-' || nptr[counter] == '+')
	{
		if (nptr[counter] == '-')
			sign = sign * -1;
		counter++;
	}
	while (nptr[counter] >= '0' && nptr[counter] <= '9')
	{
		result = (result * 10) + (nptr[counter] - '0');
		counter++;
	}
	return (result * sign);
}
