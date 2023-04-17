/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:14:46 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/13 20:14:46 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void    *memchr(const void *str, int c, size_t n)
{
        const unsigned char     *ptr;

        ptr = str;
        while (n-- > 0)
        {
                if (*ptr == ((unsigned char) c))
                        return ((void *) ptr);
                ptr++;
        }
}
/*int main() {
    char str[] = "hello world";
    char *result = memchr(str, 'd', strlen(str));
    if (result) {
        printf("O caractere 'd' foi encontrado na posição %ld da string '%s'\n", result - str, str);
    } else {
        printf("O caractere 'd' não foi encontrado na string '%s'\n", str);
    }
    return 0;
}*/