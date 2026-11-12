/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:14:15 by colauren          #+#    #+#             */
/*   Updated: 2026/11/09 20:28:31 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

	i = 0;
	while (size--)
		dst[i] = src[i++];
	dst[i] = '\0';
	return(dst);
}