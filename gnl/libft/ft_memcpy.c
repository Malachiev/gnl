/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 14:13:27 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/26 20:34:21 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ukazdst;

	ukazdst = (unsigned char*)dst;
	while (n-- > 0)
	{
		*((unsigned char*)ukazdst++) = *((unsigned char*)src++);
	}
	return (dst);
}
