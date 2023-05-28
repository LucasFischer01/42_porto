/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:23:01 by llopes-f          #+#    #+#             */
/*   Updated: 2023/05/28 20:33:27 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(const char *str)
{
        size_t i;

        i = 0;
        while (*str++)
                i++;
        return (i);
}

void ft_bzero(void *s, size_t n)
{
        unsigned char *str;

        str = (unsigned char *)s;
        while (n--)
                *str++ = 0;
}

void	*ft_calloc(size_t numb, size_t size)
{
        void *dest;
        size_t full_size;

        full_size = size * numb;
        dest = malloc(full_size);
        if (dest == NULL)
                return (NULL);
        ft_bzero(dest, full_size);
        return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = dest;
	s = src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	dest = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
		dest[i++] = s2[j++];
	dest[i] = '\0';
	return (dest);
}
