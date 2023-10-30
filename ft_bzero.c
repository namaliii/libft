/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:10:09 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/30 16:22:27 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The bzero() function writes n zeroed bytes to the string s.  If n is
//      zero, bzero() does nothing.
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	int i = 0;
// 	char str[] = "Lolololo";
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	size_t n = 5;
// 	printf("Original string %s\n", str);
// 	ft_bzero(str, n);
// 	i--;
// 	printf("Modified string: ");
// 	while (i >= 0)
// 	{
// 		printf("%c", str[i]);
// 		i--;
// 	}
// 	return 0;
// }