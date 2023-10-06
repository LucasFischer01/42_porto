/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:24:44 by fischer           #+#    #+#             */
/*   Updated: 2023/10/06 14:40:50 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack **head)
{
	t_stack *cur;
	
	cur = *head;

	while(cur)
	{
		printf("%d, %d", cur->value, cur->index);
		cur = cur->next;
	}
}

t_stack *add_newnode(int data, t_stack *stack)
{
	t_stack	*new;

    if (!(new = (t_stack *)malloc(sizeof(t_stack))))
            return (NULL);
    new->value = data;
	new->index = 0;
	new->head = true;
    new->next = NULL;
    new->prev = NULL;
    return (new);
}

int main(int argc, char *argv[])
{
    int cont = 1;
    t_stack *stack_a;
	t_stack *stack_b;
	int	index;

	stack_a = NULL;
	stack_b = NULL;
	index = 0;
	if (argc < 2)
		return (0);
	while (cont < argc)
	{
		if (index == 0)
			ft_head(ft_atoi(argv[cont]), stack_a);
		else
		{
			ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(argv[cont])) );
			cont++;
		}
		index++;
	}
	return (0);
}
