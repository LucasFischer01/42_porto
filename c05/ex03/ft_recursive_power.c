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
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}
/*
int	main()
{
	printf("resultado: %d",ft_recursive_power(2, 6));
}*/
