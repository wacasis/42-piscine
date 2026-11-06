/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:18:57 by colauren          #+#    #+#             */
/*   Updated: 2026/11/02 13:18:57 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *a, int c, size_t n)
{
    unsigned char    *ptr;
    size_t            i;

    ptr = (unsigned char *)a;
    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (a);
}