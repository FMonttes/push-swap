/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:01:20 by fmontes           #+#    #+#             */
/*   Updated: 2024/02/01 13:30:46 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list *list)
{
	t_node	*node2;
	t_node	*node1;

	node2 = list->tail;
	node1 = list->head;
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
	printf("rra\n");
}

void	rrb(t_list *list)
{
	t_node	*node2;
	t_node	*node1;

	node2 = list->tail;
	node1 = list->head;
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
	printf("rrb\n");
}

void rrr(t_list *stack_a, t_list *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	printf("rrr\n");
}
