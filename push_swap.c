/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:07:25 by fmontes           #+#    #+#             */
/*   Updated: 2024/02/01 14:22:26 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input(char **av, t_list *stack_a, t_list *stack_b)
{
	int	i;
	int	x;

	x = 1;
	while (av[x])
	{
		i = 0;
		while (av[x][i])
		{
			if (!ft_isdigit(av[x][i]))
				exit(1);
			i++;
		}
		if (ft_atol(av[x]) > 2147483647)
		{
			free_stack(stack_a);
			free_stack(stack_b);
			exit(1);
		}
		add_node_to_bottom(ft_atol(av[x]), stack_a);
		x++;
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = (t_list *)malloc(sizeof(t_list));
	if (list_size(stack_a) > 3)
		stack_b = (t_list *)malloc(sizeof(t_list));
	if (ac > 1)
	{
		input(av, stack_a, stack_b);
		if (check_args(stack_a))
		{
			return (1);
		}
		print_list(stack_a);
		free(stack_a);
	}
	return (0);
}
