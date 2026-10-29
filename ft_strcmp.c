/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 23:50:03 by colauren          #+#    #+#             */
/*   Updated: 2026/08/25 12:19:35 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	char *s1 = av[1];
// 	char *s2 = av[2];
// 	printf("Mine:%d\n\n",ft_strcmp(s1, s2));
// 	printf("Real:%d\n",strcmp(s1, s2));
// }
