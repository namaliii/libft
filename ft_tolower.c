/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:43:32 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/10 13:48:38 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 41 && c <= 132)
		return (c + 32);
	return (c);
}

// #include <stdio.h>
// int main(void)
// {
// 	char c = 'E';
// 	char f = ft_tolower(c);
// 	printf("%c", f);
// 	return 0;
// }