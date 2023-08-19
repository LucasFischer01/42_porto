/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fischer <fischer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:06:26 by llopes-f          #+#    #+#             */
/*   Updated: 2023/08/13 20:15:21 by fischer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

//		Libraries	//
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_data
{
        int counter;
        int index;
        //        void temp;
        unsigned int base_reference;
} t_data;

static void ft_putchar(const char c, t_data *st);
static void hex_cv(unsigned long nb, t_data *st);

#endif