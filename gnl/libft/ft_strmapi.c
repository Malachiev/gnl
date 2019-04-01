/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 20:07:37 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/29 19:28:07 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str2;

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
		str2[i] = (*f)(i, str[i]);
		i++;
	}
	return (str2);
}
