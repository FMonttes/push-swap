/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:25:24 by fmontes           #+#    #+#             */
/*   Updated: 2024/02/21 16:25:35 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack *stack_a)
{
	int	first;
	int	second;
	int	third;

	first = stack_a->head->value;
	second = stack_a->head->next->value;
	third = stack_a->head->next->next->value;
	if ((first > second && second > third && third < first) || (first < second
			&& second > third && third > first) || (first > second
			&& second < third && third > first))
		sa(stack_a);
	first = stack_a->head->value;
	second = stack_a->head->next->value;
	third = stack_a->head->next->next->value;
	if (first > second && second < third && third < first)
		ra(stack_a);
	if (first < second && second > third && second > third)
		rra(stack_a);
}

void	rra3(t_stack *stack_a)
{
	rra(stack_a);
	rra(stack_a);
	rra(stack_a);
}

void	sort_4(t_stack *stack_a, t_stack *stack_b)
{
	little(stack_a);
	pb(stack_b, stack_a);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5(t_stack *stack_a, t_stack *stack_b)
{
	little(stack_a);
	pb(stack_b, stack_a);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_small(t_stack *stack_a, t_stack *stack_b)
{
	int	size;

	size = stack_a->size;
	if (size == 2)
		sa(stack_a);
	if (size == 3)
		sort_3(stack_a);
	if (size == 4)
		sort_4(stack_a, stack_b);
	if (size == 5)
		sort_5(stack_a, stack_b);
}
