/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:01:04 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/27 18:01:07 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/*
#include<stdio.h>

int	main(int argc,char **argv)
{	
	int	i;
	
	i = 1;
	if (argc == 1)
		printf("resultado %d \n", ft_atoi("    \n ---+-+-15236abc"));
	else
	{
		while (i < argc)
		{
			printf("resultado %d \n", ft_atoi(argv[i]));
			i++;
		}
	} 
}*/
