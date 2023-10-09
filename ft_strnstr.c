/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:40:35 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/09 20:44:34 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	needle_len = 0;
	i = 0;
	j = 0;
	while (needle[needle_len] != '\0')
		needle_len++;
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i + needle_len <= len)
	{
		while (j < needle_len && haystack[i + j] == needle[j])
			j++;
		if (j == needle_len)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *haystack = "This is a sample string.";
// 	const char *needle = "sample";
// 	size_t len = 16;
// 	char *result = ft_strnstr(haystack, needle, len);
// 	if (result != NULL)
// 	{
// 		printf("Substring found at position: %s\n", result - haystack);
// 	}
// 	else
// 	{
// 		printf("Substring not found withing the first %zu characters. \n", len);
// 	}
// 	return 0;
// }