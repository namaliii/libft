/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:54:23 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/30 18:48:12 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strrchr() function locates the last occurrence of c.
char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			ptr = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0' && *s == '\0')
		return ((char *)s);
	return (ptr);
}

// #include <stdio.h>
// int main(void)
// {
//     const char *str = "Rompopopom";
//     char find = 'm';
// 	char *result = ft_strrchr(str, find);
// 	int index = result - str;
// 	if (result != NULL)
// 		printf("%c found at index %d", find, index);
// 	else
// 		printf("Character not found.");
// 	return 0;
// }