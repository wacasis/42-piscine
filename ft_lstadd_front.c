/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:16:52 by colauren          #+#    #+#             */
/*   Updated: 2026/11/12 19:27:14 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!new)
        return;
    if(!lst)
        return;
    new->next = *lst;
    *lst = new;
}