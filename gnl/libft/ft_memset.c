/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 21:09:44 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/26 20:34:42 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t count)
{
	unsigned char *ukazbuf;

	ukazbuf = (unsigned char*)buf;
	while (count-- > 0)
	{
		*ukazbuf++ = (unsigned char)c;
	}
	return (buf);
}
