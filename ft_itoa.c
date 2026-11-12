/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:50:28 by colauren          #+#    #+#             */
/*   Updated: 2026/11/12 14:15:45 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(long long nb, int sign)
{
	int	count;

	count = 0;
	if (nb == 0)
	{
		count = 1;
		return (count);
	}
	if (sign < 0)
		count++;
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	return (count + 1);
}

char	*ft_itoa(int n)
{
	long long	nb;
	int			sign;
	int			len;
	char		*str;

	nb = n;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		nb = sign * nb;
	}
	len = ft_len(nb, sign);
	str = malloc(ft_len(nb, sign) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (sign < 0)
		str[0] = '-';
	str[len] = '\0';
	while ( nb > 0)
	{
		str[len - 1] = (nb % 10) + '0';
		len --;
		nb /= 10;
	}
	return (str);
}
