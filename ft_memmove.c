/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:32:53 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/12 12:30:56 by anamieta         ###   ########.fr       */
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
	i = 0;
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