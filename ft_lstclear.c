/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:52:46 by anamieta          #+#    #+#             */
/*   Updated: 2023/11/02 19:57:35 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*to_delete;

	current = *lst;
	if (!(*lst))
		return ;
	while (current)
	{
		to_delete = current;
		current = current->next;
		ft_lstdelone(to_delete, del);
	}
	*lst = NULL;
}

// void ft_delete(void * something)
// {
// 	something = 0;
// }

// #include <stdio.h>
// int main(void)
// {
// 	t_list *lista;
// 	lista = ft_lstnew((void *)13);
// 	t_list *new_item = ft_lstnew((void *)21);
// 	t_list *even_newer_item = ft_lstnew((void *) 33);
// 	t_list *ne = ft_lstnew((void *)55);

// 	ft_lstadd_front(&lista, new_item);
// 	ft_lstadd_front(&lista, even_newer_item);
// 	ft_lstadd_back(&lista, ne);
// 	int count = ft_lstsize(lista);
// 	t_list *curr;

// 	curr = lista;
// 	while (curr)
// 	{
// 		printf("%d\n", (int)curr->content);
// 		curr = curr->next;
// 	}
// 	printf("Size equals: %d\n", count);
// 	ft_lstclear(&lista, ft_delete);
// 	count = ft_lstsize(lista);

// 	curr = lista;
// 	while (curr)
// 	{
// 		printf("%d\n", (int)curr->content);
// 		curr = curr->next;
// 	}
// 	printf("AFTER THE LSTCLEAN FUNCTION:\nSize equals: %d", count);
// 	return 0;
// }