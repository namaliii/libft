/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:54:23 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/10 19:12:27 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	slen;

	slen = 0;
	while (s[slen] != '\0')
	{
		slen++;
	}
	if (c == '\0')
	{
		return ((char *)&s[slen]);
	}
	while (slen >= 0)
	{
		if (s[slen] == c)
			return ((char *)&s[slen]);
		slen--;
	}
	return (0);
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