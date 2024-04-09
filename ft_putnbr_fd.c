/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:17:41 by anamieta          #+#    #+#             */
/*   Updated: 2024/04/05 17:18:50 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_putnbr_fd(long n, int fd)
{
	int		i;
	int		written;

	if (n < 0)
	{
		written = ft_putchar_fd('-', fd);
		if (written == -1)
			return (-1);
		i = ft_putnbr_fd(-n, fd);
		return (i + 1);
	}
	if (n > 9)
	{
		i = ft_putnbr_fd(n / 10, fd);
		if (i == -1)
			return (-1);
		written = ft_putchar_fd(n % 10 + '0', fd);
		if (written == -1)
			return (-1);
		return (i + written);
	}
	return (ft_putchar_fd('0' + n, fd));
}

// int main(void)
// {
// 	int number = -2147483648;
// 	ft_putnbr_fd(number, 1);
// }