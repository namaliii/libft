/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:47:25 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/30 19:05:34 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// int main()
// {
// 	char lowercase = 'a';
// 	char uppercase = ft_toupper(lowercase);
// 	printf("Original: %c\n", lowercase);
// 	printf("Uppercase: %c\n", uppercase);
// 	return 0;
// }