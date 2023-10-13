/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:24:52 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/08 15:26:15 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 0 && str[i] <= 127))
			return (0);
		i++;
	}
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