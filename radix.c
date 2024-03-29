/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:24:24 by fmontes           #+#    #+#             */
/*   Updated: 2024/02/21 16:24:33 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(t_stack *a)
{
	int	max;
	int	max_bits;

	max = get_max_index(a);
	max_bits = 0;
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

static void	sort_b(t_stack *a, t_stack *b, int max_bits, int bit)
{
	int	size;

	size = b->size;
	while (size-- && bit <= max_bits && !is_sorted(a))
	{
		if (((b->head->index >> bit) & 1) == 0)
			rb(b);
		else
			pa(a, b);
	}
	if (is_sorted(a))
		while (b->size != 0)
			pa(a, b);
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int	max_bits;
	int	bit;
	int	size;

	max_bits = get_max_bits(a);
	size = a->size;
	bit = 0;
	while (bit <= max_bits)
	{
		size = a->size;
		while (size-- && !is_sorted(a))
		{
			if (((a->head->index >> bit) & 1) == 0)
				pb(b, a);
			else
				ra(a);
		}
		bit++;
		sort_b(a, b, max_bits, bit);
	}
	while (b->size != 0)
		pa(a, b);
}
