/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:54:44 by nranna            #+#    #+#             */
/*   Updated: 2023/10/25 13:24:27 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1024);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	printf("\nMine isalpha result: %d\n", ft_isalpha(' '));
	printf("Default isalpha result: %d\n\n", isalpha(' '));
	return (0);
}
