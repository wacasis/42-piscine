/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 23:50:13 by colauren          #+#    #+#             */
/*   Updated: 2026/08/25 12:19:50 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main(int ac, char **av)
// {
//     (void)ac;
//     char *dest = av[1];
//     char *src = av[2];
//     char *to_print = ft_strcat(dest, src);
//     // char *to_print = strcat(dest, src);
//     printf("%s\n", to_print);
// }