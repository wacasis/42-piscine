/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 22:21:47 by colauren          #+#    #+#             */
/*   Updated: 2026/08/26 22:31:23 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void put_str(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
    write(1, "\n",1);
}  
int main (int ac, char **av)
{
    if (ac <= 1)
        write(1,"\n",1);
    while(av[1])
    {
        put_str(av[1]);
        return(0);
    }
    
}