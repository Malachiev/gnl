/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:54:01 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/26 20:41:42 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int ind, size_t len)
{
	char	*str2;
	size_t	i;

	if (str == NULL)
		return (NULL);
	if (ind > ft_strlen((char*)str))
		return (NULL);
	if ((str2 = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < len && str != '\0')
	{
		str2[i] = str[ind];
		i++;
		ind++;
	}
	str2[i] = '\0';
	return (str2);
}
