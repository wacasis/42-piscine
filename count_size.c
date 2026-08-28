/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 17:20:38 by colauren          #+#    #+#             */
/*   Updated: 2026/08/27 17:25:01 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

struct s_list
{
    void *data;
    struct s_list *next;
}

void count_elt(struct s_list *head)
{
    struct s_list *current;
    
    int cpt;
    
    cpt = 0;
    current = head;
    while (current->next != NULL)
    {
        current = current->next;
        cpt++;
    }
    return cpt;
}