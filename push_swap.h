/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:26:44 by fmontes           #+#    #+#             */
/*   Updated: 2024/02/21 16:27:57 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "stdbool.h"

typedef struct l_node
{
	long							value;
	int								index;
	struct l_node					*next;
}									t_node;

typedef struct l_stack
{
	t_node							*head;
	t_node							*tail;
	int								size;
}									t_stack;

int		ft_isdigit(int c);
int		sa(t_stack *stack_a);
int		sb(t_stack *stack_b);
int		ss(t_stack *stack_a, t_stack *stack_b);
int		ra(t_stack *stack_a);
int		rb(t_stack *stack_b);
int		rr(t_stack *stack_a, t_stack *stack_b);
int		rra(t_stack *stack_a);
int		rrb(t_stack *stack_b);
int		rrr(t_stack *stack_a, t_stack *stack_b);
int		pa(t_stack *stack_a, t_stack *stack_b);
int		pb(t_stack *stack_b, t_stack *stack_a);
void	rra3(t_stack *stack_a);
t_node	*add_node_to_bottom(int n, t_stack *p);
void	init_stack(t_stack *p, int ac, char **av);
void	free_stack(t_stack *p);
int		is_sorted(t_stack *list);
void	ft_free(void **mat);
void	check_args(char **av, int ac);
long	ft_atol(const char *nptr);
void	sort_3(t_stack *stack_a);
void	sort_4(t_stack *stack_a, t_stack *stack_b);
void	sort_5(t_stack *stack_a, t_stack *stack_b);
void	sort_small(t_stack *stack_a, t_stack *stack_b);
void	sort_stack(t_stack *stack_a, t_stack *stack_b);
void	little(t_stack *stack_a);
int		find_midle(t_stack *stack_a);
int		get_max_index(t_stack *stack);
void	radix_sort(t_stack *stack_a, t_stack*stack_b);
void	set_index(t_stack *stack);
#endif
