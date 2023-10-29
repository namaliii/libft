/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:17:41 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/29 19:09:55 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

// Outputs the integer ’n’ to the given file
// descriptor.
void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
		return ;
	}
	digit = -1;
	if (n != 0)
	{
		digit = n % 10 + '0';
		n = n / 10;
		if (n > 0)
			ft_putnbr_fd(n, fd);
	}
	if (digit != -1)
		ft_putchar_fd(digit, fd);
}

// int main(void)
// {
// 	int number = -2147483648;
// 	ft_putnbr_fd(number, 1);
// }