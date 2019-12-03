/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exfree.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 11:36:01 by mboturch          #+#    #+#             */
/*   Updated: 2019/11/14 11:45:08 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	exfree(t_mino **current)
{
	t_mino	*head;
	t_mino	*temp;

	head = (*current)->head;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	ft_putendl("error");
	exit(0);
}
