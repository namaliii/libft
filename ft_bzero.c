/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:10:09 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/10 22:19:03 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *p = s;
	size_t i;

	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	int i = 0;
// 	char str[] = "Lolololo";
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	size_t n = 5;
// 	printf("Original string %s\n", str);
// 	ft_bzero(str, n);
// 	i--;
// 	printf("Modified string: ");
// 	while (i >= 0)
// 	{
// 		printf("%c", str[i]);
// 		i--;
// 	}
// 	return 0;
// }