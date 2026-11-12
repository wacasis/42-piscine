/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:42:36 by colauren          #+#    #+#             */
/*   Updated: 2026/11/04 13:03:11 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
   int i;
   unsigned char *ts1;
   unsigned char *ts2;

    i = 0;
    ts1 = (unsigned char *)s1;
    ts2 = (unsigned char *)s2;
    while(i < n - 1)
    {
        if (ts1[i] == ts2[i])
            i++;
    }
    return(ts1[i] - ts2[i]);
}
