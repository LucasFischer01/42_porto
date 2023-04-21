/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:16:40 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/13 20:16:41 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;

	cpy = ft_calloc(1, ft_strlen(s) + 1);
	return (ft_memcpy(cpy, s, ft_strlen(s)));
}
/*int main() {
	char* str = "Sopa de Galinha rocks!!";
	char* copy = ft_strdup(str);

	if (copy == NULL) {
		printf("Failed to allocate memory.\n");
		return 1;
	}
	printf("Original string: %s\n", str);
	printf("Copied string: %s\n", copy);
	free(copy);
	return 0;
}*/
