/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 16:25:05 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/27 17:05:48 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*ukazsrc;
	char	*ukazdst;

	ukazsrc = (char*)src;
	ukazdst = (char*)dst;
	if (src >= dst)
	{
		dst = ft_memcpy(dst, src, n);
	}
	else
	{
		ukazdst += n - 1;
		ukazsrc += n - 1;
		while (n--)
		{
			*ukazdst-- = *ukazsrc--;
		}
	}
	return (dst);
}
