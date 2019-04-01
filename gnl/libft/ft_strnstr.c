/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:17:40 by gconroy           #+#    #+#             */
/*   Updated: 2019/02/01 16:20:34 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	int		i;
	size_t	count;

	if (*need == '\0')
	{
		return ((char*)hay);
	}
	i = 0;
	count = ft_strlen((char*)need);
	while (hay[i] != '\0' && (i + count) <= len)
	{
		if (ft_strncmp(hay + i, need, count) == 0)
		{
			return ((char*)hay + i);
		}
		i++;
	}
	return (NULL);
}
