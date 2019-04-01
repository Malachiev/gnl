/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimbin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 17:51:18 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/26 20:42:01 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrimbin(char const *s, char c)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	if (s[i] == '\0')
		return (NULL);
	k = i;
	while (s[k] != '\0' && s[k] != c)
		k++;
	return (ft_strsub(s, i, k - i));
}
