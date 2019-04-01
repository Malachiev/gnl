/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 20:26:48 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/27 21:44:23 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != (char)ch)
	{
		i++;
	}
	if (str[i] == '\0' && ch != '\0')
	{
		return (NULL);
	}
	return ((char*)&str[i]);
}
