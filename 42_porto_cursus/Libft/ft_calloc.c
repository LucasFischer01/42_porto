/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:13:22 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/13 20:13:23 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t numb, size_t size)
{
	void	*dest;
	size_t	full_size;

	full_size = size * numb;
	dest = malloc(full_size);
	if (dest == NULL)
	{
		return (NULL);
	}
	ft_bzero(dest, full_size);
	return (dest);
}
