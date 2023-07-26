/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fischer <fischer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:06:26 by llopes-f          #+#    #+#             */
/*   Updated: 2023/07/26 19:48:27 by fischer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_putchar(const char c, t_data *st)
{
        st->counter += write(1, &c, 1);
}
static void ft_putstr(const char *s, t_data *st)
{
        if (!s)
                return (ft_putstr("(null)", st));
        while (*s)
                ft_putchar(*s++, st);
}

static void ft_numbers(unsigned long nb, int fmt, t_data *st)
{
}
