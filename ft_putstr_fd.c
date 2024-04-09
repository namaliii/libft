/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:57:34 by anamieta          #+#    #+#             */
/*   Updated: 2024/04/05 17:18:32 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_putstr_fd(char *s, int fd)
{
	int	len;
	int	written;

	if (s == NULL)
		return (write(fd, "(null)", 6));
	len = ft_strlen(s);
	written = write(fd, s, len);
	if (written == -1)
		return (-1);
	return (written);
}

// int main(void)
// {
// 	char *str = "Check";
// 	ft_putstr_fd(str, 1);
// 	return 0;
// }