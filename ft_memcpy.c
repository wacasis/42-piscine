/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:24:05 by colauren          #+#    #+#             */
/*   Updated: 2026/11/03 19:43:08 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t len;
    unsigned char tmpdest;
    unsigned char tmpsrc;

    len = 0;
    tmpdest = (unsigned char *)dest;
    tmpsrc = (unsigned char *)src;
    while(len < n)
    {
        tmpsrc[len] = tmpdest[len];
        len++;
    }
    return((void *)tempdest);
}