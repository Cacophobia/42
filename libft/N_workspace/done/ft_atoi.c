/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:17:24 by nranna            #+#    #+#             */
/*   Updated: 2023/10/25 13:15:28 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
		while (nptr[counter] <= ' ')
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

int	main(int argc, char *argv[])
{
	(void)argc;
	printf ("%d\n", ft_atoi(argv[1]));
	printf ("%d\n", atoi(argv[1]));
	return (0);
}
