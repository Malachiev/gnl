/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 16:05:09 by gconroy           #+#    #+#             */
/*   Updated: 2019/02/06 18:06:06 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verification_and_replacement(const char c)
{
	int		chislo;

	if (c >= '0' && c <= '9')
		chislo = c - '0';
	else if (c >= 'a' && c <= 'z')
		chislo = c - 'a' + 10;
	else if (c >= 'A' && c <= 'Z')
		chislo = c - 'A' + 10;
	else
		chislo = -1;
	return (chislo);
}

int			ft_atoi_base(const char *str, int str_base)
{
	int		otr;
	int		chislo;
	int		residual;
	int		i;

	i = 0;
	otr = 1;
	chislo = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		otr = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	residual = verification_and_replacement(str[i]);
	while (residual >= 0 && residual < str_base)
	{
		chislo = chislo * str_base + residual;
		i++;
		residual = verification_and_replacement(str[i]);
	}
	return (chislo * otr);
}
