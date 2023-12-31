/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:14:18 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/30 16:35:46 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memchr() function locates the first occurrence of c (converted to an
//      unsigned char) in string s.
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ss;
	unsigned char		cc;
	size_t				i;

	cc = c;
	ss = s;
	i = 0;
	while (i < n)
	{
		if (ss[i] == cc)
			return ((void *)(ss + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str[] = "Merry Christmas, ho ho ho";
// 	unsigned char find = 'o';
// 	char *result = memchr(str, find, strlen(str));
// 	if (result != NULL)
// 	{
// 		printf("%c found at the position %ld\n", find, result - str);
// 	}
// 	else
// 	{
// 		printf("%c not found in the string.", find);
// 	}
// 	return 0;
// }