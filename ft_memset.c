/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:59:39 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/29 17:04:04 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)b;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
}

// #include <stdio.h>
// int main(void)
// {
//     int i = 0;
//     int c = 'u';
//     char *b = malloc(sizeof(char) * 8);
//     ft_memset(b, c, 8);
//     while (i < 8)
//     {
//         printf("%c", (unsigned char)b[i]);
//         i++;
//     }
// }
