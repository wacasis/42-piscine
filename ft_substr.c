/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 18:59:20 by colauren          #+#    #+#             */
/*   Updated: 2026/11/06 20:10:08 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char *tlen;

    if (!s)
        return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
    if (len > ((ft_strlen(s) - start)))
        len = ((ft_strlen(s) - start));
    tlen = malloc(sizeof(char) * len + 1);
    if (!tlen)
        return (NULL);
    ft_strlcpy(tlen, s + start, len + 1);
    return (tlen);
}
