/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:59:28 by fmontes           #+#    #+#             */
/*   Updated: 2024/02/01 14:21:43 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_node_to_top(int n, t_list *list)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		return ;
	new_node->content = n;
	if (list->head == NULL)
	{
		list->head = new_node;
		list->tail = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = list->head;
		list->head = new_node;
	}
}

void	add_node_to_bottom(int n, t_list *list)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		return ;
	new_node->content = n;
	if (list->head == NULL)
	{
		list->head = new_node;
		list->tail = new_node;
		new_node->next = NULL;
	}
	else
	{
		list->tail->next = new_node;
		list->tail = new_node;
		new_node->next = NULL;
	}
}

void	print_list(t_list *list)
{
	t_node	*node;

	node = list->head;
	while (node != NULL)
	{
		printf("%d\n", node->content);
		node = node->next;
	}
}

void	free_stack(t_list *list)
{
	t_node	*current;
	t_node	*next;

	current = list->head;
	if (list == NULL)
		return ;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(list);
}

int	list_size(t_list *list)
{
	t_node *node;
	int i;

	i = 0;
	node = list->head;
	while (node != NULL)
	{
		node = node->next;
		i++;
	}
	return (i);
}
