/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:59:27 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/06 17:14:41 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int ft_isdigit(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 48 && str[i] <= 57))
            return (0);
        i++;
    }
    return (1);
}

// int main(void)
// {
//      int p;
//      char string[] = "12343232";
//      p = ft_isdigit(string);
//      printf("%d", p);
//      return 0;
// }