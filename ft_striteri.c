/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:58:51 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/29 16:37:47 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Applies the function ’f’ on each character of
// the string passed as argument, passing its index
// as first argument. Each character is passed by
// address to ’f’ to be modified if necessary.
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// void	f(unsigned int x, char *c)
// {
// 	(void)x;
// 	if (*c >= 97 && *c <= 122)
// 		*c = *c - 32;
// }

// int main(void)
// {
// 	char str[] = "How are you doin";
// 	printf("Original string: %s\n", str);
// 	ft_striteri(str, (void *)f);
// 	printf("Modified string: %s\n", str);
// 	return 0;
// }