/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_and_replace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 21:20:34 by colauren          #+#    #+#             */
/*   Updated: 2026/08/27 22:05:09 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
    if ( ac != 4)
    {
        write(1,"\n",1);
        return(0);
    }
  while(av[1][i])
  {
    if (av[2][0] == av[1][i])
        av[1][i] = av[3][0];
    i++;
  }  
put_str(av[1]);
return(0);
}