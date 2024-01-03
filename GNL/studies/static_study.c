/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_study.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:06:41 by nranna            #+#    #+#             */
/*   Updated: 2024/01/01 15:14:49 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//Uncomment one of the "n" variables to see how a static variable works
int	counter(void)
{
	int	n = 0;
//	static int	n = 0;
	
	n++;
	return (n);
}
int	main(void)
{
	printf("%d\n", counter());
	printf("%d\n", counter());
	printf("%d\n", counter());
	return (0);
}
