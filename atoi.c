/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 22:45:05 by colauren          #+#    #+#             */
/*   Updated: 2026/08/27 23:04:44 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int nb = 0;
    
    while(str[i])
    {
        while (str[i] >= 9 && str[i] <= 13 && str[i] == ' ')
            i++;
        if (str[i] == '-' || str[i] == '+')
            {
                if(str[i] == '-')
                    sign = -sign;
                i++;
            }
        while (str[i] >= '0' && str[i] <= '9')
        {
           nb = (nb * 10) + (str[i] - '0');
           i++;
        }
        i++;
    }
    return(nb * sign);
}

#include <stdio.h>

int main()
{
    printf("%d",ft_atoi("--++54"));
    return(0);
}