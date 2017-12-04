/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:55:49 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/14 17:25:23 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		itoa_isneg(int *n, int *sign)
{
	if (*n < 0)
	{
		*n *= -1;
		*sign = 1;
	}
}

char			*ft_itoa(int n)
{
	int		tmp;
	int		len;
	int		sign;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmp = n;
	len = 2;
	sign = 0;
	itoa_isneg(&n, &sign);
	while (tmp /= 10)
		len++;
	len += sign;
	if ((res = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	res[--len] = '\0';
	while (len--)
	{
		res[len] = n % 10 + '0';
		n = n / 10;
	}
	if (sign)
		res[0] = '-';
	return (res);
}
