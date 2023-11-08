/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bible.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:19:13 by nranna            #+#    #+#             */
/*   Updated: 2023/08/13 16:21:11 by marcoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		write (1, &str[counter], 1);
		counter++;
	}
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	counter;

	res = 0;
	sign = 1;
	counter = 0;
	while (str[counter] == ' ' || str[counter] == '\t')
	{
		counter++;
	}
	while (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
		{
			sign = -1;
		}
		counter++;
	}
	while (str[counter])
	{
		res = res * 10 + str[counter] - '0';
		counter++;
	}
	return (sign * res);
}

char	*convert_digit_word(int digit)
{
	char	*words[10];

	words[0] = "Zero";
	words[1] = "One";
	words[2] = "Two";
	words[3] = "Three";
	words[4] = "Four";
	words[5] = "Five";
	words[6] = "Six";
	words[7] = "Seven";
	words[8] = "Eight";
	words[9] = "Nine";
	return (words[digit]);
}

char	*convert_word_number(int number)
{
	if (number < 10)
	{
		return (convert_digit_word(number));
	}
	else if (number == 10)
	{
		return ("Ten");
	}
	else if (number == 42)
	{
		return ("Fourty-two");
	}
	return ("Error");
}
