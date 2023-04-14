/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:12:31 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/13 20:12:33 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_atoi(const char *str)
{
        int sign;
        int result;

        result = 0;
        sign = 1;
        while (*str == ' ' || (*str >= 7 && *str <= 13))
                str++;
        if (*str == '-' || *str == '+')
        {
                if (*str == '-')
                        sign *= -1;
                str++;
        }
        while (*str >= '0' && *str <= '9')
        {
                result = result * 10 + (*str - '0');
                str++;
        }
        return (result * sign);
}
#include <stdlib.h>

int main()
{
        printf("atoi = %d \n", atoi("  +347656745465"));
        printf("ft_atoi = %d", ft_atoi("  +347656745465"));
}