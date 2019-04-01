/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 20:01:43 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/29 19:27:43 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	size_t	i;
	char	*str2;

	i = 0;
	if (!str || !f)
	{
		return (NULL);
	}
	if ((str2 = ft_strnew(ft_strlen((char*)str))) == NULL)
	{
		return (str2);
	}
	while (str[i] != '\0')
	{
		str2[i] = (*f)(str[i]);
		i++;
	}
	return (str2);
}
