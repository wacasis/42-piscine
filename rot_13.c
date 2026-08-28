/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 20:23:08 by colauren          #+#    #+#             */
/*   Updated: 2026/08/27 21:13:36 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void put_str(char *str)
{   
    int i = 0;
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}
int main (int ac, char **av)
{
    int i = 0;
    
    if (ac != 2)
        write(1,"\n",1);
    while(av[1][i])
    {
        if ((av[1][i] >= 'a' && av[1][i] <= 'm') || (av[1][i] >= 'A' && av[1][i] <= 'M'))
            av[1][i] += 13; 
        else if ((av[1][i] >= 'n' && av[1][i] <= 'z') || (av[1][i] >= 'N' && av[1][i] <= 'Z'))
            av[1][i] -= 13; 
        i++; 
    }
    put_str(av[1]);

    return(0);
}