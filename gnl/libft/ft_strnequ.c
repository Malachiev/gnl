/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:44:10 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/31 22:30:14 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	i;

	if (!n && s1 && s2)
		return (1);
	if (s1 && s2 && n)
	{
		i = ft_strncmp(s1, s2, n);
		if (!i)
		{
			return (1);
		}
	}
	return (0);
}
