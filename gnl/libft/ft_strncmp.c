/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 16:26:59 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/26 20:40:44 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && n > i)
		i++;
	if (n == i)
	{
		return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
