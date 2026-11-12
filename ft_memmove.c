/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:22:58 by colauren          #+#    #+#             */
/*   Updated: 2026/11/04 12:06:39 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *tmpdest;
    unsigned char *tmpsrc;
    size_t len;

    len = 0:
    tmpdest = (unsigned char *)dest;
    tmpsrc = (unsigned char *)src;
    if (src < dest)
    {
        while(n--)
            tmpdest[n] = tmpsrc[n];
    }
    else 
    {
        while (len < n)
        {
            tmpdest[len] = tmpsrc[len];
            len++;
        }
    }

    return((void *)tmpdest);
}