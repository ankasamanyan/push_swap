/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raaadix_baby.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:53:47 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/08/26 23:18:05 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	raaadix_baby(t_vars *vars, t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr;
	int		max_bit_count;
	int		i;
	int		j;

	i = 0;
	ptr = *stack_a;
	max_bit_count = find_max_bits(*vars);
	while (i <= max_bit_count)
	{
		j = 0;
		while (j < vars->argc)
		{
			if (*((int *)(*stack_a)->content) & 1 << i)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			push_a(stack_a, stack_b);
		i++;
	}
}

void	check_sort(int argc, char **argv)
{
	int	i;
	int	j;
	int	temp;
	int	count;

	i = 1;
	count = -1;
	temp = argc;
	j = 0;
	while (i + 1 < argc)
	{
		if (ft_atoi(argv[i]) < ft_atoi(argv[i + 1]))
			count++;
		i++;
	}
	if (count == argc - 3)
		exit(0);
}
