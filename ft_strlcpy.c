/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:34:56 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/29 19:22:18 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	while (dstsize > 0 && i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
// 	char desty1[12];
// 	char desty2[12];
// 	char source[] = "Now I am a criminal";
// 	unsigned int sdest = sizeof(desty1);
// 	unsigned int lensrc1 = ft_strlcpy(desty1, source, sdest);
// 	unsigned int lensrc2 = strlcpy(desty2, source, sdest);
// 	printf("Copied string using ft_strlcpy: %s\n", desty1);
//     printf("Copied string using strlcpy: %s\n", desty2);
//     printf("Length of source string using ft_strlcpy: %u\n", lensrc1);
//     printf("Length of source string using strlcpy: %u\n", lensrc2);
// 	return 0;
// }