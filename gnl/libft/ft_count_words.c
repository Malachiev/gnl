/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 18:51:12 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/30 18:02:12 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *str, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (*str)
	{
		if (i == 1 && *str == c)
		{
			i = 0;
		}
		if (*str != c && !i)
		{
			i = 1;
			k++;
		}
		str++;
	}
	return (k);
}
