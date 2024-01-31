/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:02:25 by fmontes           #+#    #+#             */
/*   Updated: 2024/01/31 17:07:06 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_list *list)
{
	t_node *node = list->head;
	
	while (node->next != NULL)
	{
		if (node->content > node->next->content)
			return 0;
		node = node->next;
	}
	return 1;
}

int	check_dup(t_list *list)
{
	t_node *current = list->head;
	t_node *runner;

	while (current != NULL)
	{
		runner = current;
		while (runner->next != NULL)
		{
			if (current->content == runner->next->content)
				return 1;
			runner = runner->next;
		}
		current = current->next;
	}
	return 0;
}

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c == '-' || c == '+'))
		return (1);
	return (0);
}


int check_args(t_list *list)
{
	if (is_sorted(list) == 1)
		return 1;
	if (check_dup(list) == 1)
		return 1;
	return 0;	
}
