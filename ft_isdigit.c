/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:59:27 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/29 16:53:40 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
//      int p;
//      char string[] = "12343232";
//      p = ft_isdigit(string);
//      printf("%d", p);
//      return 0;
// }