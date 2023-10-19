/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:28:14 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/13 19:55:41 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
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
