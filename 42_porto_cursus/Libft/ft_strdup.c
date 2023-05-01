/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:16:40 by llopes-f          #+#    #+#             */
/*   Updated: 2023/05/01 20:56:36 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;

	cpy = ft_calloc(1, ft_strlen(s) + 1);
	if (!cpy)
		return (NULL);
	return (ft_memcpy(cpy, s, ft_strlen(s)));
}
