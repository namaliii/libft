/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:37:36 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/12 12:33:44 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

// #include <stdio.h>
// int main(void)
// {
//     char string[] = "Gdybym mial gitare";
//     int l = ft_strlen(string);
//     printf("%d", l);
//     return 0;
// }