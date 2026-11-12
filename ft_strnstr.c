/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:37:09 by colauren          #+#    #+#             */
/*   Updated: 2026/11/04 19:08:15 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
    int k;

	i = 0;
	while (big[i] && i < len)
	{
        j = 0;
		if (big[i] == little[j])
		{
            j = 0;
            k = i;
			while (big[k] == little[j])
            {
                k++;
                j++;
            }
            if (j = ft_strlen(little))
                return(&big[i]);
	}
    return(NULL);

}

