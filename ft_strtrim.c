/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:54:46 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/30 13:53:43 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.
char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*trimmed;

	start = 0;
	if (s1 == NULL)
		return (0);
	end = ft_strlen(s1);
	trimmed = 0;
	if (s1 != 0 && set != 0)
	{
		while (end > start && s1[end - 1] != '\0'
			&& ft_strchr(set, s1[end - 1]))
			end--;
		while (start < end && ft_strchr(set, s1[start]))
			start++;
		trimmed = (char *)ft_calloc((end - start + 1), sizeof(char));
		if (trimmed != NULL)
		{
			ft_strlcpy(trimmed, &s1[start], end - start + 1);
		}
	}
	return (trimmed);
}

// #include <stdio.h>
// int main(void)
// {
//     char *input_string = "!!!!!!!!!!!!";
//     char *set_to_trim = "!";

//     char *trimmed_string = ft_strtrim(input_string, set_to_trim);

//     if (trimmed_string)
//     {
//         printf("Original String: \"%s\"\n", input_string);
//         printf("Trimmed String: \"%s\"\n", trimmed_string);
//         free(trimmed_string);
//     }
//     else
//     {
//         printf("Memory allocation error or invalid input.\n");
//     }
//     return 0;
// }
