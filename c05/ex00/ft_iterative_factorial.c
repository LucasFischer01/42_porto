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
	int	result;
	
	if (nb != (nb >= '0' && nb <= '9'))
		return (0);
	result = nb;
	while (nb > 1)
	{
		result = result * (nb - 1);
		nb--;
	}
	return(result);
}
int	main(int argc, char **argv)
{
	int	i;
	
	i = 1;
	if(argc == 1)
		printf("o valor de %d fatorial e: %d", 5, ft_iterative_factorial(5));
	else if (argc > 1)
		while (i < argc)
			printf("o valor de %s fatorial e: %d", argv[i], ft_iterative_factorial(argv[i]));
			i++;
}
