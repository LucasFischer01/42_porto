/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:18:36 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/13 20:18:37 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
        if (c >= 'a' && c <= 'z')
                return (c - ('a' - 'A'));
        return (c);
}
/*#include <stdio.h>
int main()
{
        printf("%c", ft_toupper('B'));
}*/