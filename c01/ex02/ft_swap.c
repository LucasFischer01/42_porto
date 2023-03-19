/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:45:11 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/16 20:33:41 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	na;

	na = *a;
	*a = *b;
	*b = na;
}
/*
int	main(void)
{
	int *a = calloc(1, sizeof(int));
	int *b = calloc(1, sizeof(int));

	*a = 42;
	*b = 24;
	printf("Before:\n %p: %d, %p %d\n", a, *a, b, *b);
	ft_swap(a, b);
	printf("After:\n %p: %d, %p %d\n", a, *a, b, *b);
	return (0);
}*/
