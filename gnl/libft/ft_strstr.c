/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 18:51:48 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/29 17:13:34 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	c = ft_strlen((char*)needle);
	if (!c)
	{
		return ((char*)haystack);
	}
	while (haystack[i] != '\0')
	{
		if (ft_strncmp(haystack + i, needle, c) == 0)
		{
			return ((char*)haystack + i);
		}
		i++;
	}
	return (NULL);
}
