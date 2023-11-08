/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:56:30 by marcoliv          #+#    #+#             */
/*   Updated: 2023/08/13 14:56:32 by marcoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bible.h"

int	main(int argc, char *argv[])
{
	char	*word_value;
	int		number;

	if (argc != 2)
	{
		ft_putstr("Error");
		return (1);
	}
	number = ft_atoi(argv[1]);
	if (number < 0)
	{
		ft_putstr ("Error");
		return (1);
	}
	if (number > 10 && number != 42)
	{
		ft_putstr ("I'm sowwy mr cadet I can't handle it :'(");
		return (1);
	}
	word_value = convert_word_number(number);
	ft_putstr (word_value);
	return (0);
}
