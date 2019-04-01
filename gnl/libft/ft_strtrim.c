/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:04:50 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/30 22:48:53 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str)
{
	size_t	first;
	size_t	i;

	if (str)
	{
		first = 0;
		while ((str[first] == ' ' || str[first] == '\n' || str[first] == '\t'))
			first++;
		if (str[first] == '\0')
			return (ft_strdup((char*)str + first));
		i = ft_strlen((char*)str) - 1;
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && i > 0)
			i--;
		return (ft_strsub((char*)str, first, i - first + 1));
	}
	return (NULL);
}
