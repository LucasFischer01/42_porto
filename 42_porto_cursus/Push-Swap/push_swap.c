/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fischer <fischer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:24:44 by fischer           #+#    #+#             */
/*   Updated: 2023/10/02 20:28:46 by fischer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_stacknew(int data, t_stack *stack_a)
{

        if (!(stack_a = (t_stack *)malloc(sizeof(t_stack))))
                return (0);
        stack_a->value = data;
        stack_a->next = NULL;
        return (1);
}

int main(int argc, char *argv[])
{
        int cont = 1;
        t_stack *stack_a;
        t_stack *stack_b;

        stack_a = NULL;
        stack_b = NULL;

        if (argc < 2)
                return (0);
        while (cont < argc)
        {
                stack_a = ft_stacknew(ft_atoi(argv[cont]), stack_a);
                printf("%s\n", argv[cont]);
                cont++;
        }
        ft_stackprint(stack_a);
        ft_stackprint(stack_b);
        return (0);
}
