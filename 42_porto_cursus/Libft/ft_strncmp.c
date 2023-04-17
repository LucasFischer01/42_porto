/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:17:58 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/13 20:17:59 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int     ft_strncmp(const char *str, const char *str2, size_t n)
{
        int     i;

        i = 0;
        while (i < n)
        {
                if (str[i] != str2[i] || str[i] == '\0')
                        return (str[i] - str2[i]);
                i++;
        }
}
/*int main()
{
    char *str1 = "";
    char *str2 = "Hello, World!";
    int n = 13;

    int res1 = ft_strncmp(str1, str2, n);
    int res2 = strncmp(str1, str2, n);

    printf("ft_strncmp: %d\n", res1);
    printf("strncmp: %d\n", res2);

    return 0;
}*/