/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:23:01 by llopes-f          #+#    #+#             */
/*   Updated: 2023/05/22 19:04:43 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = 0;
}

void	ft_calloc(size_t numb, size_t size)
{
	void	*dest;
	size_t	full_size;

	full_size = size * numb;
	dest = malloc (full_size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, full_size);
	return (dest);
}
