/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:13:58 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/28 21:14:00 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	long int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 0)
	{
		result = result * nb;
		nb --;
	}
	return (result);
}
/*
int	main(void)
{
	printf("O numero %d fatorial = %d", 15, ft_iterative_factorial(15));
}*/
