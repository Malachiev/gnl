/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 14:25:33 by gconroy           #+#    #+#             */
/*   Updated: 2019/03/02 21:20:59 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "fcntl.h"
#include "stdio.h"

int	main(void)
{
	int		i;
	char	*str;

	i = open("test.txt", O_CREAT | O_RDWR);
	while (get_next_line(i, &str) == 1)
	{
		ft_putendl(str);
		ft_strdel(&str);
	}
	//printf("%d", get_next_line(i, &str));
	//ft_strdel(&str);
	close(i);
	return (0);
}
