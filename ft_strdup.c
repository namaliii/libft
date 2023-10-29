/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:35:15 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/29 17:25:41 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	length;
	char	*s2;

	if (s1 == NULL)
		return (NULL);
	length = ft_strlen((char *)s1);
	s2 = (char *)malloc(length + 1);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, length + 1);
	return (s2);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char original[] = "Copy that, man";
// 	char *dup;

// 	dup = ft_strdup(original);
// 	if (dup != NULL)
// 	{
// 		printf("original: %s\n", original);
// 		printf("copy: %s\n", dup);
// 	}
// 	free(dup);
// 	else
// 	{
// 		printf("Memory allocation failed.");
// 	}
// 	return 0;
// }