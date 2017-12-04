/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:24:26 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/14 16:53:09 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	start;

	if (!s)
		return (NULL);
	len = ft_strlen(s) - 1;
	start = 0;
	while (WSP(s[start]))
		start++;
	if (s[start] == '\0')
		return (ft_strdup(s + start));
	while ((WSP(s[len]) && len > 0))
		len--;
	return (ft_strsub(s, start, (len - start + 1)));
}
