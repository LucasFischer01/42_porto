/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fischer <fischer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:06:26 by llopes-f          #+#    #+#             */
/*   Updated: 2023/08/13 20:15:19 by fischer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *fmt, ...)
{
	va_list arg;
	t_data st;
	int index_fmt;

	index_fmt = -1;
	st = (t_data){0};
	va_start(arg, fmt);

	while (fmt[++index_fmt])
	{
		st.counter += write(1, &fmt[index_fmt], 1);
	}
	printf("%d", st.counter);
	return (st.counter);
}
int main()
{
	ft_printf("abra%dcad%cabra", 44, 'C');
	printf("\nabra%dcad%cabra", 44, 'C');
}
