/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:12:44 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/13 20:12:45 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void    ft_bzero(void *s, size_t n)
{
        unsigned char   *str;

        str = (unsigned char *)s;
        while (n--)
                *str++ = 0;
}