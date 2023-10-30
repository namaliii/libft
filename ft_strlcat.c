/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:28:14 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/30 18:11:38 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// Appending src string to dst
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = (size_t)ft_strlen(src);
	dstlen = (size_t)ft_strlen((const char *)dst);
	i = 0;
	if (dstlen >= dstsize)
	{
		return (srclen + dstsize);
	}
	while ((src[i] != '\0') && (dstlen + i + 1) < dstsize)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char source[] = "work?";
// 	char desty[50] = "Does that even ";
// 	unsigned int s;
// 	unsigned int r;
// 	s = 20;
// 	r = ft_strlcat(desty, source, s);
// 	printf("%s\n", desty);
// 	printf("%d\n", r);
// 	char source1[] = "work?";
// 	char desty1[50] = "Does that even ";
// 	r = strlcat(desty1, source1, s);
// 	printf("%s\n", desty1);
// 	printf("%d\n", r);
// 	return (0);
// }
