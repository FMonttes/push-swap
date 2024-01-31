/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:01:36 by fmontes           #+#    #+#             */
/*   Updated: 2024/01/31 15:13:06 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_list(t_list *source, t_list *dest)
{
	if (source == NULL)
		return ;
	t_node *ori = source->head;
	t_node *destiny = dest->head;
	
	source->head = ori->next;
	add_node_to_top(ori->content, dest);
}
