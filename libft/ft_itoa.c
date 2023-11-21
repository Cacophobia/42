/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:44:02 by nranna            #+#    #+#             */
/*   Updated: 2023/11/21 17:44:49 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ilen(int n)
{
	size_t	n_len;

	n_len = 0;
	if (n <= 0)
		n_len++;
	while (n)
	{
		n = n / 10;
		n_len++;
	}
	return (n_len);
}

static char	*is_min(void)
{
	return (ft_strdup("-2147483648"));
}

static void	ft_transform(size_t n, size_t counter, char *result)
{
	while (n > 0)
	{
		result[counter--] = (n % 10) + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	res_size;
	size_t	counter;

	res_size = ft_ilen(n);
	counter = res_size - 1;
	if (n < 0)
	{
		if (n == -2147483648)
			return (is_min());
		result = (char *)ft_calloc((res_size + 1), sizeof(char));
		if (result == NULL)
			return (NULL);
		result[0] = '-';
		n = n * -1;
	}
	else
		result = (char *)ft_calloc((res_size + 1), sizeof(char));
	if (result == NULL)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	ft_transform(n, counter, result);
	return (result);
}
