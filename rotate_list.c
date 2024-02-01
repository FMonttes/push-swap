/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:01:03 by fmontes           #+#    #+#             */
/*   Updated: 2024/02/01 13:37:15 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *list)
{
	t_node	*node1;
	t_node	*node2;
	int		temp;

	node1 = list->head;
	node2 = node1->next;
	temp = node1->content;
	if (!node1 || !node2)
		return ;
	while (node1->next != NULL)
	{
		node1->content = node2->content;
		node1 = node1->next;
		node2 = node2->next;
	}
	node1->content = temp;
	printf("ra\n");
}

void	rb(t_list *list)
{
	t_node	*node1;
	t_node	*node2;
	int		temp;

	node1 = list->head;
	node2 = node1->next;
	temp = node1->content;
	if (!node1 || !node2)
		return ;
	while (node1->next != NULL)
	{
		node1->content = node2->content;
		node1 = node1->next;
		node2 = node2->next;
	}
	node1->content = temp;
	printf("rb\n");
}

void	rr(t_list *stack_a, t_list *stack_b)
{
	ra(stack_a);
	rb(stack_b);
	printf("rr\n");
}
