/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:11:01 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/06 17:20:32 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int ft_isalnum(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 65 && str[i] <= 90) 
                || (str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57)))
            return (0);
        i++;
    }
    return (1);
}

// int main(void)
// {
//      int p;
//      char string[] = "12343232a-";
//      p = ft_isalnum(string);
//      printf("%d", p);
//      return 0;
// }