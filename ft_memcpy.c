/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:52:19 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/30 16:42:18 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memcpy() function copies n bytes from memory area src to memory area
//      dst.  If dst and src overlap, behavior is undefined.  Applications in
//      which dst and src might overlap should use memmove(3) instead.
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// int main(void)
// {
//     char source[] = "Hello";
//     char dest[20];
//     size_t n = 8;
//     ft_memcpy(dest, source, n);
//     printf("Copied string: %s", dest);
//     return 0;
// }
