/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_cv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fischer <fischer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:04:35 by llopes-f          #+#    #+#             */
/*   Updated: 2023/08/13 20:15:22 by fischer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void hex_cv(unsigned long nb, t_data *st)
{
        char *base;

        base = "0123456789ABCDEF";
        if (nb >= st->base_reference)
                hex_cv(nb / st->base_reference, st);
        ft_putchar(base[nb % st->base_reference], st);
}
static void ft_putchar(const char c, t_data *st)
{
        st->counter += write(1, &c, 1);
}
int main()
{
        int a;
        t_data *st;

        a = 245;
        hex_cv(a, st);
}