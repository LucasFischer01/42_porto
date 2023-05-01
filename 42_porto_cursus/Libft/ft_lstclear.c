/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:40:53 by llopes-f          #+#    #+#             */
/*   Updated: 2023/05/01 13:30:49 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = aux;
	}
	lst = NULL;
}
