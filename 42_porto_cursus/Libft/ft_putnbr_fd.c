/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:48:37 by llopes-f          #+#    #+#             */
/*   Updated: 2023/04/20 19:10:48 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	ft_print(unsigned int n, int fd)
{
	if (n > 9)
		ft_print((n / 10), fd);
	ft_putchar_fd((n % 10 + '0'), fd);
}

void    ft_putnbr_fd(int n, int fd)
{
     if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_print(-n, fd);
	}
	else
		ft_print(n, fd);   
}