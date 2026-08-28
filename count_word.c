/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 19:41:05 by colauren          #+#    #+#             */
/*   Updated: 2026/08/27 20:08:56 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void put_char (char c)
{
    write(1,&c,1);
}
int  ft_is_sep (char c)
{
    if ( c == ' ' || c == '\t')
        return(1);
return(0);
}

int ft_count_word(char *argv)
{
    int count = 0;
    int i = 0;
    while(argv[i])
{  
    while ((ft_is_sep(argv[i]) == 1) && argv[i])
          i++;
    if (!((ft_is_sep(argv[i])) == 1) && argv[i])
            count++;
    while (!(ft_is_sep(argv[i]) == 1) && argv[i])
          i++;
}
return(count);
}
void put_nbr (int i)
{
    if (i > 10)
           put_nbr(i /10);
    put_char((i % 10) + '0');
}
#include <stdio.h>
int    main(int argc, char **argv)
{
    int count;
    
    if ( argc < 2)
    {
        write(1,"\n",1);
        return(0);
    }
count = ft_count_word(argv[1]);
put_nbr(count);
write(1,"\n",1);
return (count);
}
