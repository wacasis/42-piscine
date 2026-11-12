/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:27:42 by colauren          #+#    #+#             */
/*   Updated: 2026/11/09 20:32:48 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *s3;

    if (!s1 || !s2)
        return(NULL);

    s3 = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
    if(!s3)
        return(NULL);
    ft_strlcpy(s3, s1, ft_strlen(s1) + 1);
    ft_strlcpy(&s3[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
    return(s3);
}