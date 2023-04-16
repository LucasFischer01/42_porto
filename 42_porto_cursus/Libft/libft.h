/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 19:55:14 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/15 19:55:16 by llopes-f         ###   ########.fr       */
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

#endif
