/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:04:21 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/30 13:54:25 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;
	unsigned int	size;

	size = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= size)
		return (ft_strdup(""));
	if (start + len > size)
		len = size - start;
	subs = (char *)malloc(len + 1);
	if (subs == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

// #include <stdio.h>
// int main(void)
// {
// 	char const s[] = "Konstantynopolitanczykowianeczka?";
// 	char *subs = ft_substr(s, 0, 6);
// 	if (subs == NULL)
// 		printf("Substring creation was not successful!\n");
// 	free(subs);
// 	printf("Substring: %s", subs);
// 	return 0;
// }