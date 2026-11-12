/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:14:10 by colauren          #+#    #+#             */
/*   Updated: 2026/11/04 13:05:51 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
     int i;
     unsigned char *tmp;

    tmp = (unsigned char *)s;
    i = 0;
    while(tmp[i])
    {
        if (tmp[i] == c)
            return((void*)tmp[i]);
        i++;
    }
    return(NULL);
}