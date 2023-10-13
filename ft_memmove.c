/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:32:53 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/13 13:14:38 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dst;
	s = src;
	if (s < d && d < s + len)
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// #include <stdio.h>
// int main (void)
// {
//     char source[] = "Gdybym mial gitare";
//     char dest[] = "To bym na niej gral";
//     size_t len = 13;
//     ft_memmove(dest, source, len);
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", dest);
//     return 0;
// }

// #include <string.h>
// int main() {
//     // Create source and destination arrays of characters with an overlap
//     char data[20] = "Hello, World!";
//     char source[20];
//     char destination[20];

//     // Copy the initial data to source and destination
//     strcpy(source, data);
//     strcpy(destination, data + 6);

//     printf("Before ft_memmove:\n");
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     // Use ft_memmove to copy data from source to destination
//     ft_memmove(destination, source, 5);

//     printf("After ft_memmove:\n");
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     return 0;
// }