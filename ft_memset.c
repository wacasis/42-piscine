/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:51:34 by colauren          #+#    #+#             */
/*   Updated: 2026/11/03 19:43:14 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *s, int c, size_t n)
{
    int len;
    unsigned char    *tmp;

    len = 0;
    tmp = (unsigned char *)s;
    while (len < n)
    {
        tmp[len] = (unsigned char)c;
        len++;
    }
    return((void *)tmp);

}

hello 0 5 