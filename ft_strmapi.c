/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:26:54 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/25 15:47:48 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)ft_calloc(ft_strlen((char *)s) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// #include <stdio.h>
// char	f(unsigned int x, char c)
// {
// 	(void)x;
// 	if (c >= 97 && c <= 122)
// 		return (c - 32);
// 	return (c);
// }
// int main(void)
// {
// 	const char *s = "Rapapara";
// 	char *result = ft_strmapi(s, &f);
// 	    if (result != NULL) {
//         printf("Transformed string: %s\n", result);
//         free(result);
//     }
//     else {
//         printf("Memory allocation failed.\n");
//     }
//     return 0;
// }