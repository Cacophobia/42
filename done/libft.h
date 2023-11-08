/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:41:11 by nranna            #+#    #+#             */
/*   Updated: 2023/11/08 15:55:12 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_strlen(const char *s);
int		ft_isalpha(int c);
int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, int n);
void	*ft_memset(void *ptr, int value, size_t num);
int		ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
