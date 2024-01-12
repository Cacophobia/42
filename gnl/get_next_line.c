/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:02:16 by nranna            #+#    #+#             */
/*   Updated: 2024/01/12 05:41:57 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stockpile;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	stockpile = get_buffer(fd, stockpile);
	if (!stockpile)
		return (NULL);
	line = get_line(stockpile);
	stockpile = erase_line(stockpile);
	return (line);
}

char	*get_buffer(int fd, char *stockpile)
{
	int		chars_read;
	char	*pile;

	pile = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!pile)
		return (NULL);
	chars_read = 1;
	while (!ft_strrchr(stockpile, '\n') && (chars_read != 0))
	{
		chars_read = read(fd, pile, BUFFER_SIZE);
		if (chars_read == -1)
		{
			free(pile);
			return (NULL);
		}
		pile[chars_read] = '\0';
		stockpile = ft_strjoin(stockpile, pile);
	}
	free(pile);
	return (stockpile);
}

char	*get_line(char *stockpile)
{
	int		counter;
	char	*line;

	counter = 0;
	if (!stockpile[counter])
		return (NULL);
	while (stockpile[counter] && stockpile[counter] != '\n')
		counter++;
	line = (char *)malloc(sizeof(char) * (counter + 2));
	if (!line)
		return (NULL);
	counter = 0;
	while (stockpile[counter] && stockpile[counter] != '\n')
	{
		line[counter] = stockpile[counter];
		counter++;
	}
	if (stockpile[counter] == '\n')
	{
		line[counter] = stockpile[counter];
		counter++;
	}
	line[counter] = '\0';
	return (line);
}

char	*erase_line(char *stockpile)
{
	int		counter;
	int		counter2;
	char	*n_stockpile;

	counter = 0;
	while (stockpile[counter] && stockpile[counter] != '\n')
		counter++;
	if (!stockpile[counter])
	{
		free(stockpile);
		return (NULL);
	}
	n_stockpile = (char *)malloc(1 * (ft_strlen(stockpile) - counter + 1));
	if (!n_stockpile)
		return (NULL);
	counter++;
	counter2 = 0;
	while (stockpile[counter])
		n_stockpile[counter2++] = stockpile[counter++];
	n_stockpile[counter2] = '\0';
	free(stockpile);
	return (n_stockpile);
}
