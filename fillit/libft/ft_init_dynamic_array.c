/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_dynamic_array.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:30:54 by mboturch          #+#    #+#             */
/*   Updated: 2019/11/14 19:32:23 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_darray	*ft_init_dynamic_array(size_t size)
{
	t_darray	*initialized;

	if (!(initialized = (t_darray *)ft_memalloc(sizeof(t_darray))))
		return (NULL);
	if (!(initialized->str = (char *)ft_memalloc(sizeof(char) * size)))
		return (NULL);
	initialized->index = 0;
	initialized->size = size;
	ft_memset(initialized->str, '\0', size);
	return (initialized);
}
