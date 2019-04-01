/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 19:20:07 by gconroy           #+#    #+#             */
/*   Updated: 2019/02/01 18:08:46 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *src, size_t size)
{
	size_t	i;
	size_t	h;
	size_t	k;
	char	*str;

	str = (char*)src;
	h = ft_strlen(destination);
	k = ft_strlen((char*)src);
	i = 0;
	if (h >= size)
		return (size + k);
	while (*destination)
		destination++;
	while (str[i] && i < (size - 1) - h)
	{
		destination[i] = src[i];
		i++;
	}
	destination[i] = '\0';
	return (h + k);
}
