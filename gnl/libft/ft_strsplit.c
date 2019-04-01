/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 16:13:03 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/30 18:27:58 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_array(char **arr)
{
	while (*arr)
		ft_strdel(arr++);
	free(arr);
	return (NULL);
}

char		**ft_strsplit(char const *str, char c)
{
	int		countw;
	char	**array;
	int		i;
	int		j;
	int		first;

	if (!str || !c)
		return (NULL);
	j = 0;
	i = 0;
	countw = ft_count_words(str, c);
	if (!(array = (char**)malloc(sizeof(char*) * (countw + 1))))
		return (NULL);
	while (j < countw)
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		first = i;
		while (str[i] != '\0' && str[i] != c)
			i++;
		if (!(array[j++] = ft_strsub(str, first, i - first)))
			return (ft_free_array(array));
	}
	array[j] = NULL;
	return (array);
}
