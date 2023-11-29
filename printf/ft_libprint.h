/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libprint.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:16:55 by nranna            #+#    #+#             */
/*   Updated: 2023/11/29 15:01:45 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBPRINT_H
# define FT_LIBPRINT_H

size_t	ft_strlen(const char *s);
int		ft_printf(const char *prnt, ...);
int		ft_putchar(char c, int fd);
int		ft_pustr(char *s, int fd);

#endif
