/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:11:08 by llopes-f          #+#    #+	#      */
/*   Updated: 2023/03/23 02:11:10 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			break ;
		}
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char			*s1;
	char			*s2;
	unsigned int	n;

	s1 = "m A cAco";
	s2 = "maCaco";
	n = 5;
	printf("strcmp is: %i\n", strncmp(s1, s2, n));
	printf("ft_strcmp is: %i\n", ft_strncmp(s1, s2, n));
}*/
