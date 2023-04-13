/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:19:35 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/23 18:19:37 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *dest)
{
	int	size;

	size = 0;
	while (dest[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					size;
	unsigned int		i;

	size = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char    src[] = "U number?";
    char    dest[] = "Can I have ";
    unsigned int  nb = 3;

	//ft_strncat(dest, src, nb);
    printf("Dest BFF: %s\n", dest);
    printf("Src BFF: %s\n", src);
    printf("Num of char: %d\n", nb);
    printf("Dest AFT: :%s:\n", ft_strncat(dest, src, nb));
}*/
