/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 17:58:01 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/31 18:08:05 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;

	if (alst && del)
	{
		while (*alst)
		{
			list = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = list;
		}
		*alst = NULL;
	}
}
