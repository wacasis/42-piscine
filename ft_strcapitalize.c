/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 13:58:28 by colauren          #+#    #+#             */
/*   Updated: 2026/08/13 16:58:31 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str [0] - 32;
		if (!(((str[i]) >= 'a' && (str[i] <= 'z'))
				|| ((str[i]) >= '0' && (str[i] <= '9'))
				|| ((str[i] >= 'A' && str[i] <= 'Z'))))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				(str[i + 1] = str[i + 1] - 32);
		}
		i++;
	}
	return (str);
}
/*
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "hello, how are you doing? 42words forty-two; fifty+and+one";
// 	printf("%s\n", ft_strcapitalize(str));
// 	return (0);
// }*/
