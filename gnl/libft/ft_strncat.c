/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:56:32 by gconroy           #+#    #+#             */
/*   Updated: 2019/02/01 16:18:57 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *append, size_t n)
{
	size_t	i;
	int		h;

	i = 0;
	h = ft_strlen(dest);
	while (append[i] != '\0' && i < n)
	{
		dest[h + i] = append[i];
		i++;
	}
	dest[h + i] = '\0';
	return (dest);
}
