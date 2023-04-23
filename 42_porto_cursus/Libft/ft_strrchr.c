/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:18:18 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/22 21:33:20 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	while (i >= 0)
	{
		if (str[i] == ((unsigned char)c))
			return (&((char *)str)[i]);
		i--;
	}
	return (0);
}
/*
int main(void)
{
	char str[] = "Hello, World!";
	char *result;

	// Test 1: Search for a character that is not in the string
	result = strrchr(str, 'z');
	printf("Test 1: %s\n", result);

	// Test 2: Search for a character that is at the beginning of the string
	result = strrchr(str, 'H');
	printf("Test 2: %s\n", result);

	// Test 3: Search for a character that is at the end of the string
	result = strrchr(str, '!');
	printf("Test 3: %s\n", result);

	// Test 4: Search for a character that is in the middle of the string
	result = strrchr(str, 'o');
	printf("Test 4: %s\n", result);

	// Test 5: Search for the null terminator
	result = strrchr(str, '\0');
	printf("Test 5: %s\n", result);

	return 0;
}*/
