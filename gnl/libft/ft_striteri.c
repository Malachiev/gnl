/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 19:53:17 by gconroy           #+#    #+#             */
/*   Updated: 2019/01/29 19:14:03 by gconroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	if (!str || !f)
	{
		return ;
	}
	while (str[i] != '\0')
	{
		f(i, (char*)&str[i]);
		i++;
	}
}
