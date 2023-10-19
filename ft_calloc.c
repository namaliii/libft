/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:10:44 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/19 19:56:00 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalsize;
	void	*ptr;

	ptr = malloc(totalsize);
	totalsize = count * size;
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, totalsize);
	return (ptr);
}

// #include <stdio.h>
// int main(void) {
//     size_t count = 5;
//     size_t size = sizeof(int);
//     size_t i = 0;
//     int *list = (int *)ft_calloc(count, size);

//     if (list != NULL) {
//         while (i < count) 
//         {
//             printf("list[%zu] = %d\n", i, list[i]);
//             i++;
//         }
//         free(list);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
