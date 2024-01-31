/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:01:20 by fmontes           #+#    #+#             */
/*   Updated: 2024/01/31 15:13:16 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_list(t_list *list)
{
	t_node *node2 = list->tail;
	t_node *node1 = list->head;

	if (!node1 || !node2)
		return ;
	while (node1 != NULL)
	{
		if (node1->next->next == NULL)
			node1->next = NULL;
		node1 = node1->next;
	}
	node2->next = list->head;
	list->head = node2;	
}
