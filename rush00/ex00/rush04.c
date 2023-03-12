/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:58:03 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/12 20:36:39 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	aux_rush(int aux, int aux2, int x, int y)
{
	while (aux <= x)
	{
		if ((aux == 1 && aux2 == 1) || (aux == x && aux2 == y))
		{
			ft_putchar('A');
		}
		else if ((aux == x && aux2 == 1) || (aux == 1 && aux2 == y))
		{
			ft_putchar('C');
		}
		else if (((aux == 1 || aux == x) && (aux2 > 1 || aux2 < y))
			|| ((aux > 1 || aux < x) && (aux2 == 1 || aux2 == y)))
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		aux++;
	}
}

void	rush(int x, int y)
{
	int	aux;
	int	aux2;

	aux2 = 1;
	while (aux2 <= y)
	{
		aux = 1;
		aux_rush(aux, aux2, x, y);
		ft_putchar('\n');
		aux2++;
	}
}
