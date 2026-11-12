/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:28:43 by colauren          #+#    #+#             */
/*   Updated: 2026/11/03 19:43:02 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_bzero(void *s, size_t n)
{
    int len;
    unsigned char    *tmp;

    len = 0;
    tmp = (unsigned char *)s;
    while (len < n)
    {
        tmp[len] = '\0'
        len++;
    }
    return((void *)tmp);

}