/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:23:45 by nranna            #+#    #+#             */
/*   Updated: 2023/11/17 14:15:03 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	size_t	counter;

	counter = 0;
	if (!s || !f)
		return (NULL);
	new_s = ft_strdup(s);
	if (!new_s)
		return (NULL);
	while (s[counter])
	{
		new_s[counter] = f(counter, s[counter]);
		counter++;
	}
	return (new_s);
}
