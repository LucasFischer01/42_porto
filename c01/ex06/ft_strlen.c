/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 01:21:48 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/17 01:49:22 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{	
	int	counter;

	counter = 0;
	while (*str++)
		counter ++;
	return (counter);
}
/*
int	main()
{
	int	size;
	
	size = ft_strlen("aew caraio porra");
	printf("A string tem %d caracteres", size);
	return(0);
}*/
