/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:44:44 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/30 13:20:41 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// The strncmp() lexicographically compares the null-
// terminated strings s1 and s2. It compares not more than n characters.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (i == n)
		i--;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	size_t l;
// 	int o;
// 	int w;
// 	char str1[] = "abcdef";
// 	char str2[] = "abc\375xx";
// 	l = 5;
// 	o = strncmp(str1, str2, l);
// 	w = ft_strncmp(str1, str2, l);
// 	printf("Expected result: %d\n", o);
// 	printf("Result of ft_strncmp: %d\n", w);
// 	return 0;
// }