/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:18:08 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/13 20:18:09 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
        int     i;
        int     j;

        if (!*needle)
                return((char*)haystack);
        i = 0;
        while (haystack[i])
        {
                j = 0;
                while (haystack[i + j] && haystack[i + j] == needle[j] && len > (i + j))
                        j++;
                if (!(needle[j]))
                        return((char*)haystack + i);
                j = 0;
                i++;
        }
        return (0);
}
/*int main(void)
{
    char *result;

    // Test 1: Needle is an empty string
    result = ft_strnstr("Hello, World!", "", 13);
    printf("Test 1: %s\n", result);

    // Test 2: Needle is not found in haystack
    result = ft_strnstr("Hello, World!", "foobar", 13);
    printf("Test 2: %s\n", result);

    // Test 3: Needle is found in haystack within len characters
    result = ft_strnstr("Hello, World!", "World", 13);
    printf("Test 3: %s\n", result);

    // Test 4: Needle is not found in haystack within len characters
    result = ft_strnstr("Hello, World!", "World", 5);
    printf("Test 4: %s\n", result);

    // Test 5: Needle is found at the beginning of haystack
    result = ft_strnstr("Hello, World!", "Hello", 13);
    printf("Test 5: %s\n", result);

    // Test 6: Needle is found at the end of haystack
    result = ft_strnstr("Hello, World!", "World!", 13);
    printf("Test 6: %s\n", result);

    return 0;
}*/

