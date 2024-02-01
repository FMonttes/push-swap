/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:22:16 by fmontes           #+#    #+#             */
/*   Updated: 2024/02/01 14:03:05 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_3(t_list *stack_a)
{
    int first;
    int second;
    int third;

    first = stack_a->head->content;
    second = stack_a->head->next->content;
    third = stack_a->head->next->next->content;

    if ((first > second && second > third && third < first)
     || (first < second && second > third && third > first)
     || (first > second && second < third && third > first))
        sa(stack_a);

    first = stack_a->head->content;
    second = stack_a->head->next->content;
    third = stack_a->head->next->next->content;

    if (first > second && second < third && third < first)
        ra(stack_a);
    if (first < second && second > third && second < third)
        rra(stack_a);
	print_list(stack_a);	
}
