/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:16:06 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/13 20:16:11 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void    *memset(void *s, int c, size_t n)
{
        size_t     i;
        unsigned char   *str;

        str = (unsigned char *) s;
        i = 0;
        while (i < n)
        {
                str[i] = (unsigned char)c;
                i++;
        }
        return ((void *)str);

}
/*int main() {
   char str[50] = "Teste de string";
   
   printf("String antes de memset(): %s\n", str);
   memset(str + 5, '$', 4);
   printf("String depois de memset(): %s\n", str);
   
   return 0;
}*/