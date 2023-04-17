/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:15:01 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/13 20:15:02 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
        unsigned char   *str;
        unsigned char   *str2;
        size_t      i;

        str = (unsigned char *) s1;
        str2 = (unsigned char *) s2;
        i = 0; 
        while (i < n)
        {
                if (str[i] != str2[i])
                        return (str[i] - str2[i]);
                i++;
        }
}
/*int main()
{
    char str1[] = "Hello";
    char str2[] = "aorld";
    int result;

    result = ft_memcmp(str1, str2, 3);
    if(result < 0) {
        printf("'%s' is less than '%s'\n", str1, str2);
    } else if(result > 0) {
        printf("'%s' is greater than '%s'\n", str1, str2);
    } else {
        printf("'%s' is equal to '%s'\n", str1, str2);
    }

    return 0;
}*/