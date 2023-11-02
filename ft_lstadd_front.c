/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:32:00 by anamieta          #+#    #+#             */
/*   Updated: 2023/11/02 19:07:56 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Adds the node ’new’ at the beginning of the list.
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	*lst = new;
	new->next = tmp;
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *lista;
// 	lista = ft_lstnew((void *)13);
// 	t_list *new_item = ft_lstnew((void *)21);
// 	ft_lstadd_front(&lista, new_item);
// 	t_list *curr;

// 	curr = lista;
// 	while (curr)
// 	{
// 		printf("%d\n", (int)curr->content);
// 		curr = curr->next;
// 	}
// }
