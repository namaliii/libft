/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:20:09 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/29 16:37:13 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits_counter(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*create_s(char *s, unsigned int n, int count_digits)
{
	while (n != '\0')
	{
		s[count_digits] = n % 10 + '0';
		n = n / 10;
		count_digits--;
	}
	return (s);
}

// Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.
char	*ft_itoa(int n)
{
	char	*s;
	int		count_digits;

	count_digits = digits_counter(n);
	s = (char *)ft_calloc(count_digits + 1, sizeof(char));
	if (s == NULL)
		return (NULL);
	count_digits--;
	if (n == 0)
	{
		s[count_digits] = '0';
		return (s);
	}
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	s = create_s(s, (unsigned int)n, count_digits);
	return (s);
}

// #include <stdio.h>
// int main(void)
// {
// 	int n = -53778;
// 	char *str;

// 	str = ft_itoa(n);
// 	printf("%s", str);
// 	return 0;
// }