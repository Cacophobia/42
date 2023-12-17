/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:30:46 by nranna            #+#    #+#             */
/*   Updated: 2023/12/17 06:56:27 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//read about type promotion in c

void	format_check(char form, va_list ap)
{
	int	nofchars;

	nofchars = 0;
	if (form == 'c')
		nofchars = nofchars + ft_putchar(va_arg(ap, int));
	else if (form == 's')
		nofchars = nofchars + ft_putstr(va_arg(ap, char *));
	else if (from == 'd')
		nofchars = nofchars + ft_putnbr(va_arg(ap, int), 10);
	else if (from == 'x')
		nofchars == nofchars + ft_putnbr(va_arg(ap, unsigned int), 16);
	else
		nofchars = nofchars + write(1, &form, 1);
	return (nofchars);
	
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	nofchars;
	
	n_ofchars = 0;
	va_start (ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			nofchars = nofchars + format_check((*format++), ap);
		}
		nofchars = nofchars + ft_putchar(*format);
		format++;
	}
	va_end (ap);
	return (n_ofchars);
}

int	main(void)
{
	ft_printf("hi");
	printf("hi");
	return (0);
}
