/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:10:14 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/29 18:12:01 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		otr;
	long	chislo;

	i = 0;
	chislo = 0;
	otr = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		otr = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if (chislo * 10 / 10 != chislo || chislo * 10 + str[i] - '0' < 0)
		{
			if (otr < 0)
				return (0);
			return (-1);
		}
		chislo = chislo * 10 + str[i] - '0';
		i++;
	}
	return ((int)chislo * otr);
}
