/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 19:08:30 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/26 20:45:31 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *src, int c, size_t n)
{
	size_t	i;
	char	*ukazsrc;
	char	*p;

	i = 0;
	ukazsrc = (char*)src;
	while (i < n)
	{
		if (ukazsrc[i] == (char)c)
		{
			p = &ukazsrc[i];
			return (p);
		}
		i++;
	}
	return (NULL);
}
