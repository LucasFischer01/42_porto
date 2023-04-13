/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 04:00:44 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/23 04:00:47 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *dest)
{
	int	size;

	size = 0;
	while (*dest++)
	{
		size++;
	}
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	size = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char	src [50] = " EZEQUIEELLLL";
	char	dest[50] = " what's your name?";

	printf("BFF DST: %s", dest);
	ft_strcat(dest, src);
	printf("\nBFF SRC: %s", src);
	printf("\nResult: %s", dest);

}*/
