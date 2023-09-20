/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fischer <fischer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:24:44 by fischer           #+#    #+#             */
/*   Updated: 2023/09/20 20:44:48 by fischer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	int cont = 1;

	if (argc < 2)
		return (0);
	while (cont < argc)
	{
		printf("%s\n", argv[cont]);
		cont++;
	}
}
