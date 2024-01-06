/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:23:10 by nranna            #+#    #+#             */
/*   Updated: 2024/01/06 10:43:26 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

//You'll have to study linked lists :)
//char	*get_next_line(int fd)
int	main(void)
{
	int	fd;
	char	buf[1024];
	int	chars_read;

	chars_read = 0;
	fd = open("test.txt", O_RDONLY);
	//Changing this last value in while function makes
	//Your basic GNL fetch more characters.
	//chars_read = read(fd, buf, 2);
	//buf[chars_read] = '\n';
	//buf[chars_read + 1] = '\0';
	//printf("%s", buf);
	while (chars_read = read(fd, buf, 20))
	{
		buf[chars_read] = '\0';
		printf("buf -> %s", buf);
	}
	return (0);
}
