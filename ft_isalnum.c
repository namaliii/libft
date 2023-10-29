/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:11:01 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/29 16:59:49 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!ft_isalpha(c) && !ft_isdigit(c))
		return (0);
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
//      int p;
//      char string[] = "12343232a-";
//      p = ft_isalnum(string);
//      printf("%d", p);
//      return 0;
// }
