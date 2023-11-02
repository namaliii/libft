/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:06:11 by anamieta          #+#    #+#             */
/*   Updated: 2023/11/02 19:13:31 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node.
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

// #include <stdio.h>
// void process_content(void *data) {
//     int *num = (int *)data;
//     *num = *num * 2;
// }

// int main() {
//     t_list *list = NULL;
//     int data1 = 10;
//     int data2 = 20;
//     int data3 = 30;
//     int data0 = 99;
//     list = ft_lstnew(&data0);
//     ft_lstadd_back(&list, ft_lstnew(&data1));
//     ft_lstadd_back(&list, ft_lstnew(&data2));
//     ft_lstadd_back(&list, ft_lstnew(&data3));
//     t_list *current = list;
//     while (current) {
//         int *num = (int *)(current->content);
//         printf("Updated: %d\n", *num);
//         current = current->next;
//     }
//     ft_lstiter(list, process_content);
//     printf("LIFE AFTER LST ITER\n");
//     current = list;
//     while (current) {
//         int *num = (int *)(current->content);
//         printf("Updated: %d\n", *num);
//         current = current->next;
//     }
//     while (list) {
//         t_list *temp = list;
//         list = list->next;
//         free(temp);
//     }
//     return 0;
// }