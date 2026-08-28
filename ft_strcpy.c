/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 23:49:51 by colauren          #+#    #+#             */
/*   Updated: 2026/08/24 21:18:32 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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
// 	printf("Mine:%s\n\n", ft_strcpy(dest, src));
//     printf("Real:%s\n", strcpy(dest, src));
// }