/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:37:36 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/07 15:47:39 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(char *str)
{
    int length;

    length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return(length);
}

int main(void)
{
    char string[] = "Gdybym mial gitare";
    int l = ft_strlen(string);
    printf("%d", l);
    return 0;
}