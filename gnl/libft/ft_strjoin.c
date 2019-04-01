/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:36:41 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/29 20:28:57 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	k;

	if (!s1 || !s2)
		return (NULL);
	k = 0;
	i = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if ((s3 = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
	{
		return (NULL);
	}
	if (s1 && s2)
	{
		ft_strcpy(s3, s1);
		ft_strcat(s3, s2);
		return (s3);
	}
	return (NULL);
}
