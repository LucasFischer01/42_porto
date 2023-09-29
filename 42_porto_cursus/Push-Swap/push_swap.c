/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:24:44 by fischer           #+#    #+#             */
/*   Updated: 2023/09/29 19:20:41 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



int main(int argc, char *argv[])
{
	int cont = 1;
	t_stack	*stack_a;
	t_stack	*stack_b;

	
	
	if (argc < 2)
		return (0);
	while (cont < argc)
	{
		printf("%s\n", argv[cont]);
		cont++;
	}
}
