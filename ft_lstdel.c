/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:19:52 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/14 16:22:50 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*lst;
	t_list	*nxlst;

	lst = *alst;
	while (lst)
	{
		nxlst = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = nxlst;
	}
	*alst = NULL;
}
