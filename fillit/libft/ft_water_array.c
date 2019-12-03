/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_water_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 21:54:34 by brzamora          #+#    #+#             */
/*   Updated: 2019/11/14 17:47:03 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_darray	*ft_water_array(t_darray *darr)
{
	char	*biggerarray;

	if (!(biggerarray = (char *)ft_memalloc(sizeof(char) * (darr->size * 2))))
		return (NULL);
	ft_memset(biggerarray, '\0', (darr->size * 2));
	ft_memcpy(biggerarray, darr->str, (darr->size - 1));
	free(darr->str);
	darr->str = biggerarray;
	darr->size = (darr->size * 2);
	return (darr);
}
