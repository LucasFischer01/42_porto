/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:02:20 by llopes-f          #+#    #+#             */
/*   Updated: 2023/03/30 17:02:21 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while(i < argc)
	{
		ft_putstr(argv[i]);
		i++;
		write (1, "\n", 1);
	}
}
