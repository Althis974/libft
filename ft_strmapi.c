/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:22:05 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/13 10:41:19 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	char			*str;
	unsigned int	j;

	if (s == NULL || f == NULL)
		return (NULL);
	if ((str = ft_strnew(ft_strlen(s))) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		str[i] = (*f)(j, s[j]);
		j++;
		i++;
	}
	return (str);
}
