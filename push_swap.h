/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:08:29 by fmontes           #+#    #+#             */
/*   Updated: 2024/01/31 14:12:38 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node
{
	int	content;
	struct s_node *next;
}				t_node;

typedef struct s_list
{
	t_node *head;
	t_node *tail;
}				t_list;

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void add_node_to_top(int n, t_list *list);
void add_node_to_bottom(int n, t_list *list);
void print_list(t_list *list);
void swap_list(t_list *list);
void rotate_list(t_list *list);
void reverse_list(t_list *list);
void push_list(t_list *source, t_list *dest);
int is_sorted(t_list *list);
int	check_dup(t_list *list);
int	ft_isdigit(int c);
int check_args(t_list *list);
long	ft_atol(const char *nptr);
void	free_stack(t_list *list);

#endif
