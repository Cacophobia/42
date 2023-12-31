/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:07:53 by nranna            #+#    #+#             */
/*   Updated: 2023/12/27 17:30:21 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	search(char needle, char *haystack)
{
	int	i;

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle)
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	string[6] = "nathan";
	char	needle;

	printf("What char do you want to find? ");
	scanf("%c", &needle);
	if (search(needle, string) == 1)
		printf("I've found it.\n");
	else
		printf("Couldn't find it.\n");
	return (0);
}
