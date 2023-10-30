/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:50:06 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/30 13:11:07 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strchr() function locates the first occurrence of c (converted to a
//      char) in the string pointed to by s.
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0' && *s == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
//     const char *str = "Gdyby ryby glos tez mialy";
//     char find = 'y';
//     char *result = ft_strchr(str, find);
//     int index = result - str;
//     if (result != NULL)
//     {
//         printf("%c found at index: %d\n", *result, index);
//     }
//     else
//     {
//         printf("Character not found. \n");
//     }
//     return 0;
// }
