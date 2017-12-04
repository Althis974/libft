/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:27:31 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/10 17:02:08 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	if ((s = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	ft_memset(s, (int)'\0', size + 1);
	return (s);
}
