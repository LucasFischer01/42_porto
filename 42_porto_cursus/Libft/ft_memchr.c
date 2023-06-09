/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:14:46 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/22 20:43:47 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = str;
	while (n-- > 0)
	{
		if (*ptr == ((unsigned char) c))
			return ((void *) ptr);
		ptr++;
	}
	return (0);
}
