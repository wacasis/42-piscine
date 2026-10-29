/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student..fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 13:24:49 by colauren          #+#    #+#             */
/*   Updated: 2026/08/24 15:52:14 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_base_got_dup(char *str);
int		ft_strlen(char *base);

int	ft_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	convert_to_dec(char *nbr, char *base_to)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	sign = 1;
	nb = 0;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nbr[i])
	{
		nb = nb * ft_strlen(base_to) + ft_index(nbr[i], base_to);
		i++;
	}
	return (nb * sign);
}

int	count_len(int nbr, char *base)
{
	int	size;
	int	count;

	count = 0;
	size = ft_strlen(base);
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr /= size;
		count++;
	}
	return (count);
}

char	*convert_itoa(int convert_atoi, char *base_to)
{
	char		*res;
	int			countlen;
	long int	nb;

	nb = convert_atoi;
	countlen = count_len(nb, base_to);
	res = malloc(sizeof(char) * (countlen + 1));
	if (res == NULL)
		return (NULL);
	res[countlen] = '\0';
	if (nb == 0)
		res[0] = '0';
	if (nb < 0)
	{
		nb = -nb;
		res[0] = '-';
	}
	while (nb > 0)
	{
		res[--countlen] = base_to[nb % ft_strlen(base_to)];
		nb /= ft_strlen(base_to);
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		convert_atoi;
	char	*convert;

	i = 0;
	while (base_from[i])
	{
		if ((ft_strlen(base_from)) <= 1 || ft_base_got_dup(base_from) == 1
			|| base_from[i] == '+' || base_from[i] == '-'
			|| base_from[i] == ' ')
			return (NULL);
		i++;
	}
	while (base_to[i])
	{
		if ((ft_strlen(base_to)) <= 1 || ft_base_got_dup(base_to) == 1
			|| base_to[i] == '+' || base_to[i] == '-' || base_to[i] == ' ')
			return (NULL);
		i++;
	}
	convert_atoi = convert_to_dec(nbr, base_from);
	convert = convert_itoa(convert_atoi, base_to);
	return (convert);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s", ft_convert_base("42", "0123456789", "01"));
// 	return (0);
// }
