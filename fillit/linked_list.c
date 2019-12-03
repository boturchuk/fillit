/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 11:36:01 by mboturch          #+#    #+#             */
/*   Updated: 2019/11/14 19:29:10 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_mino		*init_list(void)
{
	t_mino	*current;

	if (!(current = (t_mino *)ft_memalloc(sizeof(t_mino))))
		return (NULL);
	current->head = current;
	current->ap = 0;
	current->next = NULL;
	current->prev = NULL;
	current->alpha = 'A';
	return (current);
}

t_mino		*append_piece(t_mino *current)
{
	t_mino	*tail;

	tail = (t_mino *)ft_memalloc(sizeof(t_mino) * 1);
	current->next = tail;
	tail->next = NULL;
	tail->prev = current;
	tail->ap = 0;
	tail->head = current->head;
	tail->alpha = ((tail->prev)->alpha + 1);
	return (tail);
}
