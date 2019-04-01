/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:25:16 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/26 20:35:42 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *destination, const char *append)
{
	int i;
	int h;

	i = 0;
	h = ft_strlen(destination);
	while (append[i] != '\0')
	{
		destination[h + i] = append[i];
		i++;
	}
	destination[h + i] = '\0';
	return (destination);
}
