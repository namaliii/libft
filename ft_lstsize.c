/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:27:58 by anamieta          #+#    #+#             */
/*   Updated: 2023/11/02 19:08:03 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Counts the number of nodes in a list.
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*current;

	i = 0;
	current = lst;
	if (!lst)
		return (0);
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}

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
// 	printf("Size equals: %d", count);
// 	return 0;
// }
