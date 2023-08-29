/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:06:26 by llopes-f          #+#    #+#             */
/*   Updated: 2023/08/29 18:45:27 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//		Libraries	//
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_data
{
	int				counter;
	int				index_fmt;
	long			temp;
	unsigned int	base_reference;
}	t_data;

static void	ft_putchar(const char c, t_data *st);
static void	ft_putstr(const char *str, t_data *st);
static void	base_cv(unsigned long nb, const char fmt, t_data *st);
static void	id_flags(char fmt, t_data *st, va_list arg);
int			ft_printf(const char *fmt, ...);

#endif