/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_int_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 21:31:57 by colauren          #+#    #+#             */
/*   Updated: 2026/08/26 22:19:08 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    rev_int_tab(int *tab, int size)
{
    int i;
    int temp;

    i = 0;
        while(i < size - i - 1)
        {
            temp = tab[i];
            tab[i] = tab[size - 1 - i];
            tab[size - 1 - i] = temp;
            i++;
        }
}

#include <stdio.h>
int    main(void)
{
    int    tab[6] = {10, 2, 35, 44, 15, 6};

    printf("Tableau de base : %d %d %d %d %d %d\n",
    tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    rev_int_tab(tab, 6);
    printf("Tableau inverse : %d %d %d %d %d %d\n",
    tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return (0);
}

