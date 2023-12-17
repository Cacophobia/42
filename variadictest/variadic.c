/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 01:53:06 by nranna            #+#    #+#             */
/*   Updated: 2023/12/17 03:07:48 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

float	average(int n, ...)
{
	//ap stands for argument pointer, no need for the star, va_list is already * by default.
	va_list ap;
	float	total;
	int	i;

	//here we skipping n, n == 3 btw.
	//we're also saying that ap is pointing to n :D
	va_start(ap, n);
	total = 0;
	i = 0;
	while (i < n)
	{
		//here we'll iterate every one of the lil guys in our ..., so it'll gonna be 40, 60
		// and 20.
		total = total + va_arg(ap, int);
		i++;
	}
	//here we free up some space, no need for out list anymore :)
	va_end(ap);
	return (total / n);
}

int	main(void)
{
	float	av_age;

	av_age = average(3, 40, 60, 20);
	printf("the average age is: %f\n", av_age);
}
