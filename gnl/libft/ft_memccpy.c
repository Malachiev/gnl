/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 15:26:22 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/31 20:40:09 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			p;
	unsigned char	*ukazdst;
	unsigned char	*ukazsrc;

	p = 0;
	ukazdst = (unsigned char*)dst;
	ukazsrc = (unsigned char*)src;
	while (p < n)
	{
		if (ukazsrc[p] == (unsigned char)c && p < n)
		{
			ukazdst[p] = ukazsrc[p];
			return (&ukazdst[p] + 1);
		}
		ukazdst[p] = ukazsrc[p];
		p++;
	}
	return (NULL);
}
