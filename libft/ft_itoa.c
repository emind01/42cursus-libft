/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:18:16 by muduran           #+#    #+#             */
/*   Updated: 2024/10/19 15:07:00 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc(int x)
{
	int	i;

	i = 1;
	while (x >= 10 || x <= -10)
	{
		x /= 10;
		i++;
	}
	return (i);
}

static int	num(int x)
{
	if (x > 0)
		return (calc(x));
	else if (x < 0)
		return (calc(-1 * x) + 1);
	else
		return (1);
}

char	*ft_itoa(int n)
{
	char	*new;
	size_t	length;
	int		number;

	number = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = num(number);
	new = (char *)malloc((sizeof(char) * length) + 1);
	if (!new)
		return (NULL);
	new[length] = '\0';
	if (n < 0)
	{
		number *= -1;
	}
	while (length > 0)
	{
		new[length - 1] = number % 10 + '0';
		number /= 10;
		length--;
	}
	if (n < 0)
		new[0] = '-';
	return (new);
}
