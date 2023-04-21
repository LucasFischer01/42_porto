/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:18:08 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/21 20:00:15 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (needle[n] == 0)
		return ((char *)haystack);
	while (haystack[h])
	{
		while (haystack[h + n] && haystack[h + n] == needle[n] && len > (h + n))
			n++;
		if (!(needle[n]))
			return ((char *)haystack + h);
		n = 0;
		h++;
	}
	return (0);
}
/*int main(void)
{
	char *result;

	// Test 1: start is an empty string
	result = ft_strnstr("Hello, World!", "", 13);
	printf("Test 1: %s\n", result);

	// Test 2: start is not found in haystack
	result = ft_strnstr("Hello, World!", "foobar", 13);
	printf("Test 2: %s\n", result);

	// Test 3: start is found in haystack within len characters
	result = ft_strnstr("Hello, World!", "World", 13);
	printf("Test 3: %s\n", result);

	// Test 4: start is not found in haystack within len characters
	result = ft_strnstr("Hello, World!", "World", 5);
	printf("Test 4: %s\n", result);

	// Test 5: start is found at the beginning of haystack
	result = ft_strnstr("Hello, World!", "Hello", 13);
	printf("Test 5: %s\n", result);

	// Test 6: start is found at the end of haystack
	result = ft_strnstr("Hello, World!", "World!", 13);
	printf("Test 6: %s\n", result);
	return 0;
}*/
