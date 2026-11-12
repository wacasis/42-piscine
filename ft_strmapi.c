/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:17:22 by colauren          #+#    #+#             */
/*   Updated: 2026/11/12 20:54:42 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *s1;

    if (!s)
        return(NULL);
    if (!f)
    return(NULL);
    i = 0;
    s1 = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
    if (!s1)
        return(NULL);
    while (i < ft_strlen(s))
    {
        s1[i] = (*f)(i, s[i]);
        i++;
    }
    s1[i] = '\0';
    return(s1);
}