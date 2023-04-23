/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:16:26 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/22 21:02:51 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str && (unsigned char)c != *str)
		str++;
	if (*str == c)
		return ((char *)str);
	return (0);
}
/*int main()
{
	printf("ft_strchr: %s\n", ft_strchr("abracadabra", 'l'));
	printf("strchr: %s", strchr("abracadabra", 'l'));
}*/
