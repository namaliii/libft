/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:03:49 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/08 15:27:26 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

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
