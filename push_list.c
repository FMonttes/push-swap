/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:01:36 by fmontes           #+#    #+#             */
/*   Updated: 2024/02/01 13:33:46 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *source, t_list *dest)
{
	t_node	*ori;
	t_node	*destiny;

	ori = source->head;
	destiny = dest->head;
	source->head = ori->next;
	add_node_to_top(ori->content, dest);
	printf("pa\n");
}

void	pb(t_list *source, t_list *dest)
{
	t_node	*ori;
	t_node	*destiny;

	ori = source->head;
	destiny = dest->head;
	source->head = ori->next;
	add_node_to_top(ori->content, dest);
	printf("pb\n");
}
