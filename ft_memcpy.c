/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:52:19 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/13 12:14:14 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*dest;
	const char	*source;
	size_t		i;

	dest = dst;
	source = src;
	i = 0;
	if (src == NULL)
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
