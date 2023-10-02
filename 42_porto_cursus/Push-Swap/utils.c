/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fischer <fischer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:22:03 by llopes-f          #+#    #+#             */
/*   Updated: 2023/10/02 20:01:52 by fischer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_atoi(char *str)
{
        int i;
        int sign;
        int result;

        result = 0;
        i = 0;
        sign = 1;

        if (str[i] == '-' || str[i] == '+')
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

int main(int ac, char *av[])
{
        int cont;

        cont = 0;

        if (ac < 2)
                return (printf("error"));
        while (++cont < ac)
        {
                printf("%d\n", ft_atoi(av[cont]));
        }
}