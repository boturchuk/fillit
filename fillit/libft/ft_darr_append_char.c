/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_darr_append_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:30:43 by mboturch          #+#    #+#             */
/*   Updated: 2019/11/21 21:10:28 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_darray	*ft_darr_append_char(t_darray *darr, char c)
{
	if (darr == NULL)
		return (NULL);
	if (darr->index == (int)(darr->size - 1))
		if (!(ft_water_array(darr)))
			return (NULL);
	darr->str[darr->index] = c;
	darr->index++;
	return (darr);
}
