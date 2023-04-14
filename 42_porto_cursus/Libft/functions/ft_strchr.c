/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:16:26 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/13 20:16:27 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *str, int c)
{
        while (*str)
        {
                if (*str == c)
                        return (str);
                else
                        str++;
        }
}
/*#include <string.h>
#include <stdio.h>
int main()
{
        printf("ft_strchr: %s\n", ft_strchr("abracadabra", 'l'));
        printf("strchr: %s", strchr("abracadabra", 'l'));
}*/