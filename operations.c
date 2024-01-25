/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:12:02 by fmontes           #+#    #+#             */
/*   Updated: 2024/01/25 13:23:53 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

void add_node_to_top(int n, t_list *list)
{
	t_node *new_node = (t_node *)malloc(sizeof(t_node));

	if (new_node == NULL)
		return;

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

void add_node_to_bottom(int n, t_list *list)
{
	t_node *new_node = (t_node *)malloc(sizeof(t_node));

	if (new_node == NULL)
		return;
		
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

void print_list(t_list *list)
{
	t_node *node;

	node = list->head;
	while (node != NULL)
	{
		printf("%d\n", node->content);
		node = node->next;
	}
}

void swap_list(t_list *list)
{
	//FALTA INCLUIR AS 3 OPERACOES (SA SB SS)

	t_node *node1 = list->head;
	t_node *node2 = node1->next;
	int temp;

	temp = node1->content;
	node1->content = node2->content;
	node2->content = temp;
}

void rotate_list(t_list *list)
{
	// FALTA INCLUIR AS 3 OPERACOES (RA RB RR)
	t_node *node1 = list->head;
	t_node *node2 = node1->next;
	int temp = node1->content;

	while (node1->next != NULL)
	{
		node1->content = node2->content;
		node1 = node1->next;
		node2 = node2->next;
	}
	node1->content = temp;
}

void reverse_list(t_list *list)
{
	t_node *node2 = list->tail;
	t_node *node1 = list->head;
	
	while (node1 != NULL)
	{
		if (node1->next->next == NULL)
			node1->next = NULL;
		node1 = node1->next;
	}
	node2->next = list->head;
	list->head = node2;	
}

void push_list(t_list *source, t_list *dest)
{
	t_node *ori = source->head;
	t_node *destiny = dest->head;
	
	source->head = ori->next;
	add_node_to_top(ori->content, dest);
}

int main(int ac, char **av)
{
	t_list *a = (t_list *)malloc(sizeof(t_list));
	t_list *b = (t_list *)malloc(sizeof(t_list));
	int x = 1;

	if (ac > 1)
	{
		while (av[x])
		{
			add_node_to_bottom(atoi(av[x]), a);
			x++;
		}
		printf("lista normal\n");
		print_list(a);
		push_list(a, b);
		push_list(a, b);
		printf("lista a\n");
		print_list(a);
		printf("lista b\n");
		print_list(b);
		push_list(b, a);
		printf("lista a\n");
		print_list(a);
		printf("lista b\n");
		print_list(b);
		

	}
}

