/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brzamora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 23:00:39 by brzamora          #+#    #+#             */
/*   Updated: 2019/08/20 00:19:56 by brzamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		b;
	int		e;
	int		i;
	char	*str;

	b = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b++;
	if (s[b] == '\0')
		return (ft_strnew(0));
	e = ft_strlen(s) - 1;
	while (s[e] == ' ' || s[e] == '\n' || s[e] == '\t')
		e--;
	if (!(str = (char *)malloc(sizeof(char) * (e - b + 2))))
		return (NULL);
	while (i < e - b + 1)
	{
		str[i] = s[i + b];
		i++;
	}
	str[i] = '\0';
	return (str);
}
