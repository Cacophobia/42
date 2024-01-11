/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:23:10 by nranna            #+#    #+#             */
/*   Updated: 2024/01/10 21:41:21 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stockpile;
	char		*line;
	
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &line, 0) < 0)
		return (NULL);
	stockpile = read_function(fd, stockpile);
	if (!stockpile)
		return (NULL);
	line = get_line(stockpile);
	stockpile = erase_line(stockpile);
	return (line);
}

char	*read_function(int fd, char *stockpile)
{
	char	*tmp_line;
	int	nofchars;

	tmp_line = (char *)ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (tmp_line == NULL)
		return (NULL);
	while (ft_strchr(stockpile, '\n') == NULL)
	{
		nofchars = read(fd, tmp_line, BUFFER_SIZE);
		stockpile = ft_strjoin(stockpile, tmp_line);
	}
	free (tmp_line);
	return (stockpile);
}

char	*get_line(char *stockpile)
{
	int	counter;
	char	*line;

	counter = 0;
	if (stockpile[counter] == NULL)
		return (NULL);
	while (stockpile[counter] && stockpile[counter] != '\n')
		counter++;
	line = ft_calloc((counter + 1), sizeof(char));
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
		line[counter] == '\n';
		counter++;
	}
	return (line);
}

char	*erase_line(char *stockpile)
{
	int	counter;
	int	counter2;
	char	*n_stockpile;

	counter = 0;
	while (stockpile[counter] && stockpile[counter] != '\n')
		counter++;
	if (stockpile[counter] == NULL)
	{
		free(stockpile);
		return (NULL);
	}
	counter++;
	n_stockpile = ft_calloc(ft_strlen(stockpile) - counter, sizeof(char));
	if (n_stockpile == NULL)
		return (NULL);
	counter2 = 0;
	//I think it's possible to use stdup here
	while (stockpile[counter])
		n_stockpile[counter2++] = stockpile[counter++];
	n_stockpile[counter2] = '\0';
	free(stockpile);
	return (n_stockpile);
}
