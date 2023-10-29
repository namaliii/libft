/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:25:49 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/29 16:38:06 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Outputs the character ’c’ to the given file
// descriptor.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
