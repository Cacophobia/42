/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bible.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:41:48 by marcoliv          #+#    #+#             */
/*   Updated: 2023/08/13 16:53:13 by marcoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIBLE_H
# define BIBLE_H	
# include <unistd.h>

void	ft_putstr(char *str);
int		ft_atoi(char *str);
char	*convert_digit_word(int digit);
char	*convert_word_number(int number);

#endif
