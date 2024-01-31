/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:01:03 by fmontes           #+#    #+#             */
/*   Updated: 2024/01/31 15:14:42 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate_list(t_list *list)
{
	// FALTA INCLUIR AS 3 OPERACOES (RA RB RR)
	t_node *node1 = list->head;
	t_node *node2 = node1->next;
	int temp = node1->content;

	if (!node1 || !node2)
		return ;
	while (node1->next != NULL)
	{
		node1->content = node2->content;
		node1 = node1->next;
		node2 = node2->next;
	}
	node1->content = temp;
}
