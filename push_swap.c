/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:07:25 by fmontes           #+#    #+#             */
/*   Updated: 2024/01/31 17:32:17 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input(char **av, t_list *stack_a, t_list *stack_b)
{
	int i = 0;
	int x = 1;
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
				free(stack_b);
				exit(1);
			}
			add_node_to_bottom(ft_atol(av[x]), stack_a);
			x++;
		}
}

int main(int ac, char **av)
{	
	if (ac > 1)
	{
		t_list *stack_a = (t_list *)malloc(sizeof(t_list));
		t_list *stack_b = (t_list *)malloc(sizeof(t_list));
		if (!stack_a || !stack_b)
			return 1;
		input(av, stack_a, stack_b);
		 if (check_args(stack_a))
            return 1;
		printf("lista normal\n");
		print_list(stack_a);
		free_stack(stack_a);
		free_stack(stack_b);
	}
	return 0;
}
