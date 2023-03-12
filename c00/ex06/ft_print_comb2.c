/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 04:05:12 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/10 04:05:41 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
    char num1;
    char num2;
    char num3;
    char num4;

    num1 = '0';
    num2 = '0';
    num3 = '0';
    num4 = '1';

    while (num1 <= '9')
    {
        while (num2 <= '9')
        {
            while (num3 <= '9')
            {
                while (num4 <= '9')
                {
                    if (num1 < num3 || (num1 == num3 && num2 < num4))
                    {
                        write(1, &num1, 1);
                        write(1, &num2, 1);
                        write(1, " ", 1);
                        write(1, &num3, 1);
                        write(1, &num4, 1);
                        if (!(num1 == '9' && num2 == '8' && num3 == '9' && num4 == '9'))
                        {
                            write(1, ", ", 2);
                        }
                    }
                    num4++;
                }
                num4 = '0';
                num3++;
            }
            num3 = '0';
            num2++;
        }
        num2 = '0';
        num1++;
    }
}

int main()
{
    ft_print_comb2();
    return (0);
}
