/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 16:49:59 by gconroy           #+#    #+#             */
/*   Updated: 2019/03/02 18:30:11 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_zapis(char **str, char *str1, char **line)
{
	if (str1 && *str1)
	{
		if ((*str = ft_strchr(str1, '\n')) != NULL)
		{
			if ((*line = ft_strsub(str1, 0, *str - str1)) == NULL ||\
				(*str = ft_strdup(*str + 1)) == NULL)
			{
				ft_strdel(&str1);
				return (-1);
			}
		}
		else
		{
			if ((*line = ft_strdup(str1)) == NULL)
			{
				ft_strdel(&str1);
				return (-1);
			}
		}
		ft_strdel(&str1);
		return (1);
	}
	ft_strdel(str);
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	int			count;
	char		*str1;
	char		buff[BUFF_SIZE + 1];
	static char	*str[LIMIT_DES];

	if (fd >= LIMIT_DES || fd < 0 || !line)
		return (-1);
	str1 = str[fd];
	if (!str[fd])
		str[fd] = ft_memalloc(1);
	while (0 < (count = read(fd, buff, BUFF_SIZE)))
	{
		buff[count] = '\0';
		str1 = ft_strjoin(str[fd], buff);
		ft_strdel(&str[fd]);
		if (ft_strchr(str1, '\n') != NULL)
			break ;
		else
			str[fd] = str1;
	}
	if (count < 0)
		return (-1);
	return (ft_zapis(&str[fd], str1, line));
}
