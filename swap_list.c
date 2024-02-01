/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:00:41 by fmontes           #+#    #+#             */
/*   Updated: 2024/02/01 13:38:09 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *list)
{
	t_node	*node1;
	t_node	*node2;
	int		temp;

	node1 = list->head;
	node2 = list->head;
	if (node1 == NULL || node2 == NULL)
		return ;
	temp = node1->content;
	node1->content = node2->content;
	node2->content = temp;
	printf("sa\n");
}

void	sb(t_list *list)
{
	t_node	*node1;
	t_node	*node2;
	int		temp;

	node1 = list->head;
	node2 = list->head;
	if (node1 == NULL || node2 == NULL)
		return ;
	temp = node1->content;
	node1->content = node2->content;
	node2->content = temp;
	printf("sb\n");
}

void ss(t_list *stack_a, t_list *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	printf("ss\n");
}
