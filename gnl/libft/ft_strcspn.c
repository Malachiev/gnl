/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 22:38:05 by gconroy           #+#    #+#             */
/*   Updated: 2019/02/03 22:52:03 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(const char *str1, const char *str2)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (str1 && str2)
	{
		while (str1[i] != '\0')
		{
			k = 0;
			while (str2[k] != '\0')
			{
				if (str1[i] == str2[k])
					return (i);
				k++;
			}
			i++;
		}
	}
	i = 0;
	while (str1[i])
		i++;
	return (i);
}
