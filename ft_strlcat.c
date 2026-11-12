/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 19:30:22 by colauren          #+#    #+#             */
/*   Updated: 2026/11/03 20:02:55 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    while(dst[i])
        i++;
    while (i < size && src[i])
        dst[i++] = src[i];
    return(dst);
}