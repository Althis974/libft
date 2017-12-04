/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:15:26 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/13 09:41:40 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char*)dst;
	s2 = (char*)src;
	i = len;
	if (s2 < s1)
	{
		while (i--)
			s1[i] = s2[i];
	}
	else
		ft_memcpy(s1, s2, i);
	return (s1);
}
