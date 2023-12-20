/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 02:43:24 by nranna            #+#    #+#             */
/*   Updated: 2023/12/17 10:58:54 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putnbr(int n, int base)
{
//	int	nofchars;
//	char	*hex;

//	hex = "0123456789abcdef";
//	nofchars = 0;
        if (n == -2147483648)
                ft_putstr("-2147483648");
        else if (n < 0)
        {
                ft_putchar('-');
                n = n * -1;
                ft_putnbr(n, base);
        }
        else if (n > 9)
        {
                ft_putnbr((n / base), base);
                ft_putnbr((n % base), base);
        }
        else
                ft_putchar(((char)n + '0'));
	return (0);
}
