/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:48:16 by anamieta          #+#    #+#             */
/*   Updated: 2023/11/02 20:08:25 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_safe(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
	{
		free(content);
		return (NULL);
	}
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*current;
	t_list	*create_node;

	if (lst == NULL || f == NULL)
		return (NULL);
	create_node = ft_lstnew_safe((*f)(lst->content));
	if (create_node == NULL)
		return (NULL);
	new_head = create_node;
	current = new_head;
	lst = lst->next;
	while (lst)
	{
		create_node = ft_lstnew_safe((*f)(lst->content));
		if (create_node == NULL)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		current->next = create_node;
		current = current->next;
		lst = lst->next;
	}
	return (new_head);
}

// #include <stdio.h>
// void *process_content(void *data) {
//     int *num = (int *)data;
//     *num = *num * 2;
// 	return ((void *)num);
// }

// void ft_delete(void * something)
// {
// 	something = 0;
// }

// int main() {
//     t_list *list = NULL;
// 	t_list *result;
//     int data1 = 10;
//     int data2 = 20;
//     int data3 = 30;
//     int data0 = 99;
//     list = ft_lstnew(&data0);
//     ft_lstadd_back(&list, ft_lstnew(&data1));
//     ft_lstadd_back(&list, ft_lstnew(&data2));
//     ft_lstadd_back(&list, ft_lstnew(&data3));
//     t_list *current = list;
//     while (current) 
// 	{
//         int *num = (int *)(current->content);
//         printf("Updated: %d\n", *num);
//         current = current->next;
//     }
//    	result = ft_lstmap(list, &process_content, ft_delete);
//     printf("LIFE AFTER LST MAP\n");
//     current = result;
//     while (current) 
// 	{
//         int *num = (int *)(current->content);
//         printf("Updated: %d\n", *num);
//         current = current->next;
//     }
//     return 0;
// }
