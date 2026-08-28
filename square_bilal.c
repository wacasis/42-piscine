/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_bilal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bparis <bparis@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 10:14:25 by bparis            #+#    #+#             */
/*   Updated: 2026/08/08 10:15:07 by bparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void square(int c)
{
    int colonnes;
    int coin1;
    int coin2;

    colonnes = 1;
    coin1 = 1;
    coin2 = c;
    while(colonnes < c)
    {
        if(colonnes == coin1 || colonnes == coin2)
        {
            write(1, "A", 1);
            colonnes++;
        }
        else
        {
            write(1, "B", 1);
            colonnes++;
        }
    }
    write(1, "\n", 1);
}

int main()
{
   square(15);
   return(0);
}