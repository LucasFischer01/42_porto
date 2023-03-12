/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 02:21:54 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/12 21:15:42 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	aux_print (num1, num2, num3)
{
	 if(num1 != '7' || num2 !='8' || num3 != '9')
	 {
		write(1, &num1, 1);
		write(1, &num2, 1);
		write(1, &num3, 1);
		write(1, ",", 1);
	}
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	while (num1 <= '9')
	{
		num2 = num1 + 1;
		while (num2 <= '9')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				aux_print (num1, num2, num3);
				num3++;
			}
		num2++;
		}
	num1++;
	}
}

int main (void)
{
	ft_print_comb();
}
