/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:30:46 by nranna            #+#    #+#             */
/*   Updated: 2023/12/20 16:01:52 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
//read about type promotion in c

int	ft_strlen(const char *s)
{
	size_t counter;

	counter = 0;
	while (s[counter])
		counter++;
	return (counter);
}

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	if (!s)
		return (0);
	write (1, s, ft_strlen(s));
	return (ft_strlen(s));
}

int	ft_putnbr(int n, int base)
{
	int	nofchars;
	char	*hex;

	hex = "0123456789abcdef";
	nofchars = 0;
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
		ft_putnbr(n, base);
	}
	else if (n > base)
	{
		nofchars = ft_putnbr((n / base), base);
		return (nofchars + ft_putnbr((n % base), base));
	}
	else
		return (ft_putchar(hex[n]));
}

int	format_check(char form, va_list ap)
{
	int	nofchars;

	nofchars = 0;
	if (form == 'c')
		 nofchars = nofchars + ft_putchar(va_arg(ap, int));
	else if (form == 's')
		nofchars = nofchars + ft_putstr(va_arg(ap, char *));
	else if (form == 'd')
		nofchars = nofchars + ft_putnbr(va_arg(ap, int), 10);
	else if (form == 'x')
		nofchars = nofchars + ft_putnbr(va_arg(ap, unsigned int), 16);
	else
		nofchars = nofchars + write(1, &form, 1);
	return (nofchars);
	
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	nofchars;
	
	nofchars = 0;
	va_start (ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			nofchars = nofchars + format_check(*format, ap);
			break;
		}
		nofchars = nofchars + ft_putchar(*format);
	}
	va_end (ap);
	return (nofchars);
}

int	main(void)
{
	ft_printf("%s", "deu certo?");
	printf("%s", "\nparece que sim :)");
	return (0);
}


//ok it works fine with raw text but you also need to take care of some things
