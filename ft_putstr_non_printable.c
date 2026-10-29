/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 13:58:04 by colauren          #+#    #+#             */
/*   Updated: 2026/08/13 17:05:09 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbrhex(int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb > 16)
	{
		ft_putnbrhex(nb / 16);
	}
	ft_putchar(base[nb % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31) || (str[i] == 127))
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_putnbrhex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
// int	main(void)
// {
// 	ft_putstr_non_printable("Hello\nHow are you ?");
// 	return (0);
// }
