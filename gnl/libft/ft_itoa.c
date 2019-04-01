/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 20:02:22 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/29 22:30:28 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_numbers(int n)
{
	size_t k;

	if (n == 0)
	{
		return (1);
	}
	k = 0;
	while (n)
	{
		n = n / 10;
		k++;
	}
	return (k);
}

char			*ft_itoa(int n)
{
	size_t	otr;
	size_t	count;
	char	*str;

	otr = (n < 0) ? 1 : 0;
	count = ft_count_numbers(n);
	if (!(str = ft_strnew(count + otr)))
	{
		return (str);
	}
	if (otr)
	{
		str[0] = '-';
	}
	while (count-- > 0)
	{
		str[count + otr] = (otr ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
	}
	return (str);
}
