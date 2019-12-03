/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brzamora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 22:53:18 by brzamora          #+#    #+#             */
/*   Updated: 2019/08/19 23:17:04 by brzamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	tofind;

	tofind = (char)c;
	if (c == '\0')
	{
		while (*s)
		{
			s++;
		}
		return ((char*)s);
	}
	while (*s)
	{
		if ((char)*s == tofind)
			return ((char*)s);
		s++;
	}
	return (NULL);
}
