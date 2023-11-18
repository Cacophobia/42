/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:14:10 by nranna            #+#    #+#             */
/*   Updated: 2023/11/18 08:33:52 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(char const *s, char c)
{
	size_t	counter;
	size_t	substr_counter;

	substr_counter = 0;
	counter = 0;
	while (s[counter])
	{
		while (s[counter] && s[counter] == c)
			counter++;
		if (s[counter] && s[counter] != c)
		{
			substr_counter++;
			while (s[counter] && s[counter] != c)
				counter++;
		}
	}
	return (substr_counter);
}

static char	*word_maker(char const *s, int start, int finish)
{
	char	*substr;
	size_t	counter;

	counter = 0;
	substr = malloc((finish - start + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (start < finish)
	{
		substr[counter++] = s[start++];
	}
	substr[counter] = '\0';
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	char	**substrings;
	size_t	x;
	size_t	y;
	int		counter;

	if (!s)
		return (NULL);
	substrings = ft_calloc((word_counter(s, c) + 1), sizeof(char *));
	if (!substrings)
		return (NULL);
	x = 0;
	y = 0;
	counter = -1;
	while (x <= ft_strlen(s))
	{
		if (s[x] != c && counter < 0)
			counter = x;
		else if ((s[x] == c || s[x] == '\0') && counter >= 0)
		{
			substrings[y++] = word_maker(s, counter, x);
			counter = -1;
		}
		x++;
	}
	return (substrings);
}
