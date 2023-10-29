/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:24:52 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/29 16:53:21 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
//     char string[] = "Æ";
//     int r;
//     r = ft_isascii(string);
//     printf("%d", r);
//     return 0;
// }