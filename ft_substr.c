/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:04:21 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/20 15:18:13 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	subs = (char *)malloc(len + 1);
	if (subs == NULL)
		return (NULL);
	if (i < start)
		i++;
	while (s[i] != '\0' && start + len > i)
	{
		subs[i - start] = s[i];
		i++;
	}
	subs[i - start] = '\0';
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