/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 23:50:08 by colauren          #+#    #+#             */
/*   Updated: 2026/08/25 12:19:43 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	char *s1 = av[1];
// 	char *s2 = av[2];
// 	int size = atoi(av[3]);
// 	printf("Mine:%d\n\n",ft_strncmp(s1, s2, size));
// 	printf("Real:%d\n",strncmp(s1, s2, size));
// }
