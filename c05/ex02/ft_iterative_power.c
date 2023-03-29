/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:52:25 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/29 18:52:28 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	while (power-- > 0)
		result = result * nb;
	return (result);
}
/*
int	main(void)
{
	printf(" o numero %d a potencia %d e igual a %d", 2, 5, ft_iterative_power(2, 5));
}*/

