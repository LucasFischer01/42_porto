/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 19:55:14 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/20 19:27:39 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int	ft_atoi(const char *str);
int	ft_isalnum(unsigned int c);
int	ft_isalpha(unsigned int c);
int	ft_isascii(unsigned int c);
int	ft_isdigit(unsigned int c);
int	ft_isprint(unsigned int c);
char	*ft_strchr(const char *str, int c);
size_t     ft_strlen(const char *str);
int	ft_tolower(int c);
int	ft_toupper(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(const char *str, int c);
int     ft_strncmp(const char *str, const char *str2, size_t n);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *memset(void *s, int c, size_t n);
void    *memchr(const void *str, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t numb, size_t size);
void    ft_bzero(void *s, size_t n);
char    *ft_strdup(const char *s);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);


#endif
