/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:50:06 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/13 13:41:24 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (0);
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
