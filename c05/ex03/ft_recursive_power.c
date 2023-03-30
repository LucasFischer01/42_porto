/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:29:34 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/29 19:29:37 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (n > n * nb)
		return (0);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
		return (n * ft_recursive_power(n, power - 1));
	else
		return (n);
}
/*
int	main()
{
	printf("resultado: %d",ft_recursive_power(2, 6));
}*/
