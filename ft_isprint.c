/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:03:49 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/29 16:53:56 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
//     char c1 = 57;
//     char c2 = '\n';
//     int f1 = ft_isprint(c1);
//     printf("%c, %d", c1, f1);
//     int f2 = ft_isprint(c2);
//     printf("%c, %d", c2, f2);
//     return 0;
// }