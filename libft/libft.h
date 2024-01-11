/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:13:25 by nranna            #+#    #+#             */
/*   Updated: 2024/01/08 18:54:34 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/* *********************************************************************** */
/*                                                                         */
/*  [ft_strlen] will loop through your string until it reaches its end.    */
/*  @return = string lenght.                                               */
/*  @param s = pointer to your string.                                     */
/*                                                                         */
/* *********************************************************************** */
size_t	ft_strlen(const char *s);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_isalpha] checks if c is part of the alphabet.                      */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table.                       */
/*                                                                         */
/* *********************************************************************** */
int		ft_isalpha(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_isdigit] checks if c is a number between 0 and 9.                  */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table.                       */
/*                                                                         */
/* *********************************************************************** */
int		ft_isdigit(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_isalnum] checks if c is true in ft_isdigit and ft_isalpha.         */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table.                       */
/*                                                                         */
/* *********************************************************************** */
int		ft_isalnum(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_isascii] checks if c is part of the ASCII table.                   */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table                        */
/*                                                                         */
/* *********************************************************************** */
int		ft_isascii(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_isprint] checks if c is printable.                                 */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table.                       */
/*                                                                         */
/* *********************************************************************** */
int		ft_isprint(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_tolower] converts uppercase char to lowercase char using ASCII.    */
/*  @return = c + 32.                                                      */
/*  @param c = int to be converted.                                        */
/*                                                                         */
/* *********************************************************************** */
int		ft_tolower(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_toupper] converts lowercase char to uppercase char using ASCII.    */
/*  @return = c - 32.                                                      */
/*  @param c = int to be converted.                                        */
/*                                                                         */
/* *********************************************************************** */
int		ft_toupper(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_atoi] converts ASCII represented number to integer number.         */
/*  @return = int number.                                                  */
/*  @param *nptr = pointer to char or array of chars(string).              */
/*                                                                         */
/* *********************************************************************** */
int		ft_atoi(const char *nptr);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_bzero] set a memory block to '\0'.                                 */
/*  @return = c - 32.                                                      */
/*  @param c = int to be converted.                                        */
/*                                                                         */
/* *********************************************************************** */
void	ft_bzero(void *s, size_t n);


void	*ft_memcpy(void *dest, const void *src, int n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int i, char *));
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);

#endif
