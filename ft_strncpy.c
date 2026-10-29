/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 23:49:58 by colauren          #+#    #+#             */
/*   Updated: 2026/08/24 21:19:46 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
//     (void)ac;
//     char *src = av[1];
// 	char *dest = malloc(sizeof(strlen(src) + 1));
//     int size = atoi(av[2]);
// 	printf("Mine:%s\n\n", ft_strncpy(dest, src, size));
//     printf("Real:%s\n", strncpy(dest, src, size));
// }