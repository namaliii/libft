/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:10:44 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/20 15:01:52 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  The calloc() function contiguously allocates enough space for count
//      objects that are size bytes of memory each and returns a pointer to the
//      allocated memory.  The allocated memory is filled with bytes of value
//      zero.
void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalsize;
	void	*ptr;

	totalsize = count * size;
	ptr = malloc(totalsize);
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
