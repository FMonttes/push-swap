/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:00:41 by fmontes           #+#    #+#             */
/*   Updated: 2024/01/31 15:13:24 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_list(t_list *list)
{
	//FALTA INCLUIR AS 3 OPERACOES (SA SB SS)

	t_node *node1 = list->head;
	t_node *node2 = node1->next;
	int temp;
	
	if(!node1 || !node2)
		return ;
	temp = node1->content;
	node1->content = node2->content;
	node2->content = temp;
}
