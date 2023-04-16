/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:17:38 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/13 20:17:39 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
        size_t  i;
        size_t  srcsize;

        srcsize = ft_strlen(src);
        i = 0;
        if (size != 0)
        {
                while (src[i] && i < (size - 1))
                {
                        dest[i] = src[i];
                        i++;
                }
                dest[i] = '\0';
        }
        return (srcsize);
}
/*int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];
    size_t src_len = strlen(src);
    size_t dest_len = ft_strlcpy(dest, src, sizeof(dest));
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Source length: %zu\n", src_len);
    printf("Destination length: %zu\n", dest_len);
    return 0;
}*/
