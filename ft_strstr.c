/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 23:50:22 by colauren          #+#    #+#             */
/*   Updated: 2026/08/25 15:22:43 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	tempi;

	i = 0;
	j = 0;
	if (!to_find)
		return (str);
	while (str[i])
	{
		j = 0;
		tempi = i;
		while (str[tempi] == to_find[j] && str[tempi] && to_find[j])
		{
			j++;
			tempi++;
		}
		if (j == str_len(to_find))
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// #include <string.h>
// int main(int ac, char **av)
// {
//     (void)ac;
//     char *str = av[1];
//     char *to_find = av[2];
//     char *to_print = ft_strstr(str, to_find);
// 	char *to_print2 = strstr(str, to_find);
//     if (!to_print)
//     {
//         printf("%p\n", (void *)to_print);
//         return (0);
//     }
// 	if (!to_print2)
// 	{
// 		printf("%p\n", (void *)to_print2);
// 		return (0);
// 	}
//     printf("%s\n", to_print);
// 	printf("%s\n", to_print2);
// }
