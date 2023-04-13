/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:34:55 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/16 23:52:00 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a  = 5;
	int b  = 9;

	int div = a;
	int modulo = b;

	ft_div_mod(a, b, &div, &modulo);
	
	printf("Div: %d\n", div);
	printf("Mod: %d\n", modulo);
}*/
