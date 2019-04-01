/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_and_replace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 21:54:33 by gconroy           #+#    #+#             */
/*   Updated: 2019/02/03 22:53:24 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_search_and_replace(const char *ska, int sym1, int sym2)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)ska;
	if (str && sym1 && sym2)
	{
		while (str[i] != '\0')
		{
			if (str[i] == sym1)
				str[i] = sym2;
			i++;
		}
		return (str);
	}
	return (NULL);
}
