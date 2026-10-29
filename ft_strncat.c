/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 23:50:17 by colauren          #+#    #+#             */
/*   Updated: 2026/08/25 12:19:58 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(int ac, char **av)
// {
//     (void)ac;
//     char *dest = av[1];
//     char *src = av[2];
//     int size = atoi(av[3]);
//     char *to_print = ft_strncat(dest, src, size);
//     // char *to_print = strncat(dest, src, size);
//     printf("%s\n", to_print);
// }