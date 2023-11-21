/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:32:28 by nranna            #+#    #+#             */
/*   Updated: 2023/11/21 15:46:54 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	string_size;
	char	*substr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		substr = ft_calloc(1, sizeof(char));
		if (!substr)
			return (NULL);
	}
	else
	{
		string_size = ft_strlen(s + start);
		if (!(string_size < len))
			string_size = len;
		substr = (char *)ft_calloc((string_size + 1), sizeof(char));
		if (!substr)
			return (NULL);
		substr[string_size] = 0;
		while (string_size-- > 0)
			substr[string_size] = s[string_size + start];
	}
	return (substr);
}
