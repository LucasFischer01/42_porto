/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:17:20 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/22 22:51:13 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = ft_strlen(dest);
	dest_len = i;
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	while (*src != '\0' && i < size - 1)
	{
		dest[i] = *src++;
		i++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
