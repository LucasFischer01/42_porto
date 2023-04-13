/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:02:29 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/25 18:02:31 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*converter;
	unsigned char	tmp;

	i = 0;
	converter = "0123456789abcdef";
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (!(tmp >= 32 && tmp <= 127))
		{
			ft_putchar('\\');
			ft_putchar(converter[tmp / 16]);
			ft_putchar(converter[tmp % 16]);
		}
		else
			ft_putchar(tmp);
		i++;
	}
}
