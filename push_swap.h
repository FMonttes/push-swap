/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:08:29 by fmontes           #+#    #+#             */
/*   Updated: 2024/02/01 13:36:35 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_node
{
	int		content;
	struct	s_node *next;
}				t_node;

typedef struct s_list
{
	t_node	*head;
	t_node	*tail;
}				t_list;

void	add_node_to_top(int n, t_list *list);
void	sort_3(t_list *stack_a);
void	add_node_to_bottom(int n, t_list *list);
void	print_list(t_list *list);
void	sa(t_list *list);
void	sb(t_list *list);
void	ss(t_list *stack_a, t_list *stack_b);
void	ra(t_list *list);
void	rb(t_list *list);
void	rr(t_list *stack_a, t_list *stack_b);
void	rra(t_list *list);
void	rrb(t_list *list);
void	rrr(t_list *stack_a, t_list *stack_b);
void	pa(t_list *source, t_list *dest);
void	pb(t_list *source, t_list *dest);
int		is_sorted(t_list *list);
int		check_dup(t_list *list);
int		ft_isdigit(int c);
int		check_args(t_list *list);
int		list_size(t_list *list);
long	ft_atol(const char *nptr);
void	free_stack(t_list *list);

#endif
