/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 21:01:36 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/31 16:27:32 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	i;

	i = ft_strlen((char*)str);
	if ((ft_strchr(str, ch) == NULL))
	{
		return (NULL);
	}
	while (str[i] != ch)
	{
		i--;
	}
	return ((char*)&str[i]);
}
