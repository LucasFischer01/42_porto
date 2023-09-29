/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:06:26 by llopes-f          #+#    #+#             */
/*   Updated: 2023/08/30 16:58:25 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(const char c, t_data *st)
{
	st->counter += write(1, &c, 1);
}

static void	ft_putstr(const char *str, t_data *st)
{
	if (!str)
		return (ft_putstr(("(null)"), st));
	while (*str)
		ft_putchar(*str++, st);
}

static void	base_cv(unsigned long nb, const char fmt, t_data *st)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (fmt == 'x')
		base = "0123456789abcdef";
	if (fmt == 'u')
		st->base_reference = 10;
	if (fmt == 'b')
		st->base_reference = 2;
	if (fmt == 'o')
		st->base_reference = 8;
	if (nb >= st->base_reference)
		base_cv(nb / st->base_reference, fmt, st);
	ft_putchar(base[nb % st->base_reference], st);
}

static void	id_flags(char fmt, t_data *st, va_list arg)
{
	if (fmt == 'c')
		ft_putchar(va_arg(arg, int), st);
	if (fmt == 's')
		ft_putstr(va_arg(arg, char *), st);
	if (fmt == 'p')
	{
		st->temp = va_arg(arg, long);
		if (st->temp == 0)
			return (ft_putstr("(nil)", st));
		ft_putstr("0x", st);
		base_cv(st->temp, 'x', st);
	}
	if (fmt == 'i' || fmt == 'd')
	{
		st->temp = va_arg(arg, int);
		if (st->temp < 0)
		{
			ft_putchar('-', st);
			st->temp *= -1;
		}
		base_cv(st->temp, 'u', st);
	}
	if (fmt == 'x' || fmt == 'X' || fmt == 'u' || fmt == 'b' || fmt == 'o')
		base_cv(va_arg(arg, unsigned int), fmt, st);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	arg;
	t_data	st;

	st = (t_data){0};
	st.index_fmt = -1;
	va_start(arg, fmt);
	while (fmt[++st.index_fmt])
	{
		st.base_reference = 16;
		if (fmt[st.index_fmt] == '%')
		{
			if (fmt[++st.index_fmt] == '%')
				ft_putchar('%', &st);
			else
				id_flags(fmt[st.index_fmt], &st, arg);
		}
		else
			ft_putchar(fmt[st.index_fmt], &st);
	}
	va_end(arg);
	return (st.counter);
}
